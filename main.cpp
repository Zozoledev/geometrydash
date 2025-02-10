#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <random>
#include "player.hpp"





int main(){
    sf::RenderWindow window(sf::VideoMode(1200, 600), "Geometry Dash");
    window.setFramerateLimit(60);


    /*Player Sprite*/
    Player cube;
    cube.setPosition(100, 400);

    sf::Clock clock; 
    sf::Time elapsed1;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Space) {
                    cube.changejump();
                    elapsed1 = clock.restart();
                    
                    
                    
                }
                    
            }
        }


        std::cout << cube.get_coordinate_bottom() << std::endl;

        elapsed1 = clock.getElapsedTime();
        if(cube.isjump() && elapsed1.asSeconds() < 0.3){
            cube.move(0, -5);
        }else if(cube.isjump()){
            clock.restart();
            cube.changejump();
            cube.setPosition(100,400);
        }

        
        
        
        window.clear();     
        window.draw(cube);
        window.display();
    }

    return 0;
}


    
