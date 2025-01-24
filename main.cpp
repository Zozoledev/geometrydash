#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <random>
#include "player.hpp"

int main(){
    sf::RenderWindow window(sf::VideoMode(1200, 600), "Geometry Dash");
    window.setFramerateLimit(60);
    Player cube;
    cube.setPosition(100, 400);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Space) {
                    cube.changejump();
                    
                    
                }
                    
            }
        }

        if(cube.isjump()){
            cube.move(0, -4);
        }

        
        
        
        window.clear();     
        window.draw(cube);
        window.display();
    }

    return 0;
}


    
