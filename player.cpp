#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <random>
#include "player.hpp"



Player::Player(){
        texture.loadFromFile(file_texture);
        sprite.setTexture(texture);

}

std::string Player::get_file_texture(){
    return Player::file_texture;
}

void Player::draw(sf::RenderTarget& target, sf::RenderStates states) const {
    target.draw(sprite);
}


void Player::setPosition(float dx, float dy){
    sprite.setPosition(dx, dy);
}

void Player::move(float dx, float dy){
    sprite.move(dx, dy);
}

bool Player::isjump(){
    return Player::jump; 
}

void Player::changejump(){
    Player::jump = !(Player::jump);
}

float Player::get_coordinate_left(void){
    Player::bounds = sprite.getGlobalBounds();
    return Player::bounds.left;
}

float Player::get_coordinate_bottom(void){
    Player::bounds = sprite.getGlobalBounds();
    return Player::bounds.top + Player::bounds.height;
}


float Player::get_coordinate_top(void){
    Player::bounds = sprite.getGlobalBounds();
    return Player::bounds.top;
}


float Player::get_coordinate_right(void){
    Player::bounds = sprite.getGlobalBounds();
    return Player::bounds.left + Player::bounds.width;
}