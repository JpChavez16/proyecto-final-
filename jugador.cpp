#include "jugador.h"
jugador::jugador()
{
	cargar_imagen();
}

void jugador::cargar_imagen()
{
	txt_principal.loadFromFile("coche4.jpg");
	spr_principal.setTexture(txt_principal);
	spr_principal.setPosition(300,500);
	spr_principal.setScale(50.f/spr_principal.getTexture()->getSize().x,100.f/spr_principal.getTexture()->getSize().y);
 
}

Sprite jugador::get_jugador()
{
	return spr_principal;
}

void jugador::jugador_movimiento()
{
	if (Keyboard::isKeyPressed(Keyboard::Up))
		{
			
			spr_principal.move(0,-2);
		}
		if(Keyboard::isKeyPressed(Keyboard::Down))
			{
					//spr_principal.setPosition(spr_principal.getPosition().x,spr_principal.getPosition().y+4);
				spr_principal.move(0,2);
			}
		if(Keyboard::isKeyPressed(Keyboard::Left))
			{
					//spr_principal.setPosition(spr_principal.getPosition().x-4,spr_principal.getPosition().y);
				spr_principal.move(-2,0);
			}
		if(Keyboard::isKeyPressed(Keyboard::Right))
			{
					//spr_principal.setPosition(spr_principal.getPosition().x+4,spr_principal.getPosition().y);
				spr_principal.move(2,0);
			}
}


