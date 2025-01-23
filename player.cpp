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





