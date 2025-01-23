class Player : public sf::Drawable, public sf::Transformable{
    private :
        
        std::string file_texture = "cube.png";
        sf::Texture texture;
        sf::Sprite sprite;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

     
        
    public :

        Player();

        std::string get_file_texture(void);
         /*retourne file_texture*/
        
    


};