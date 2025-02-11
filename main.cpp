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
    int cpt_saut = -1;

    // sf::Clock clock; 
    // sf::Time elapsed1;

    // sf::Clock time
    // sf::Time jumpTime;

    while (window.isOpen()) {
        // sf::Time deltaT =clock.restart();
        // printf(delaT);
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Space) {
                    if(!cube.isjump()){
                        cube.changejump();
                    }
                    
                    // elapsed1 = clock.restart();
                    cpt_saut++;
                    
                    
                    
                }
                    
            }
        }


        std::cout << cube.get_coordinate_bottom() << std::endl;
        std::cout << "cpt = " << cpt_saut << std::endl;

        // elapsed1 = clock.getElapsedTime();

        // if(cube.isjump() && elapsed1.asSeconds() < 0.3){
        //     cube.move(0, -5);
        // }else if(cube.isjump()){
        //     cube.move(0, 5);
        // }else if(cube.get_coordinate_bottom() > 477){
        //     cube.changejump();
        //     cube.setPosition(100, 400);
        // }

        if(cube.isjump() && cpt_saut >= 0 && cpt_saut < 15){
            cpt_saut++;
            cube.move(0, -5);
        }else if(cube.isjump()){
            cube.move(0, 5);
        }
        
        if(cube.get_coordinate_bottom() > 477){
            cube.changejump();
            cube.setPosition(100,400);
            cpt_saut = -1;
        
        }

        if(!cube.isjump()){
            cpt_saut = -1;
        }


        window.clear();     
        window.draw(cube);
        window.display();
    }

    return 0;
}


    
