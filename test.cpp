#include <iostream>
#include <SFML/System.hpp>



int main(){
    sf::Clock clock; 
    sf::Time elapsed1;
    while(true){
        elapsed1 = clock.getElapsedTime();
        auto seconde = elapsed1.asSeconds();
        std::cout << seconde << std::endl;
        // sf::sleep(sf::seconds(1));
        if(seconde > 10){
            clock.restart();
        }
    }
    return 0;
}
