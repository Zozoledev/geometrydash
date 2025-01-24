class Player : public sf::Drawable, public sf::Transformable{
    private :
        
        std::string file_texture = "cube.png";
        sf::Texture texture;
        sf::Sprite sprite;
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

        bool jump = false;

     
        
    public :

        Player();

        std::string get_file_texture(void);
         /*retourne file_texture*/

        void setPosition(float dx, float dy);
        /*Position d'origine*/

        void move(float dx, float dy);
        /*Bouge le sprite*/

        bool isjump(void);
        /*Renvoie la valeur de jump*/

        void changejump(void);
        /*Modifie la valeur de jump*/

        
    


};