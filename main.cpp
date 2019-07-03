#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "menu.h"
#include "juego.h"
using namespace sf;
 
int main()
{
    
    RenderWindow window(VideoMode(800, 600), "Gear Speed");
    Vector2f resol;
	resol.x=800;
	resol.y=600;
    
    Menu menu(window.getSize().x,window.getSize().y);
    
    Texture texture;
	if (!texture.loadFromFile("images/fondoinicial.jpg")){
	     system("echo No se puedo cargar la textura&pause");
    }
    Sprite sprite1(texture);
    Vector2u textureSize= texture.getSize();
    Sprite sprite2(texture, IntRect(textureSize.x* .1, 0,textureSize.x, textureSize.y));
    
	Music music;
	if(!music.openFromFile("audio/game audio1.ogg")){
	   system("echo no se pudo cargar el audio&pause");	
	   return EXIT_FAILURE;
	}
	
	music.play();
	
    while (window.isOpen())
    {
        
		
        Event event;
        while (window.pollEvent(event))
        {
            
            switch (event.type)
            {
            	case sf::Event::Closed:
					window.close();	
				case sf::Event::KeyReleased:
            		switch (event.key.code)
            		{
            		case sf::Keyboard::Up:
            			menu.MoveUp();
            			menu.MoveUpOpciones();	
            			break;
            		case sf::Keyboard::Down:
            			menu.MoveDown();
            			menu.MoveDownOpciones();
            			break;
            			
        			case sf::Keyboard::Return:
        				switch (menu.GetPressedItem())
        				{
        				case 0:
        					juego partida1(resol,"Gear Speed");
        					break;
	
						}
						
						switch (menu.GetPressedItem())
        				{
						case 1:
							menu.configurar_opciones(window);
							break;
						case 2:
							break;
						case 3:
							window.close();
							break;
						}
						
						switch (menu.GetPressedItemOpc())
						{
						case 0:
							break;
						case 1:
							break;
						case 2:
							menu.atras(window);
							break;
						}
							
				 }
					
					
				break;	   
			}		 
        }
        
        window.clear();
        
        window.draw(sprite1);
   		window.draw(sprite2);
        menu.dibujar(window);
        menu.dibujar_opciones(window);
		    
        window.display();
    }

    return EXIT_SUCCESS;
}
