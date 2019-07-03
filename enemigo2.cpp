#include "enemigo2.h"
using namespace sf;
enemigo2::enemigo2()
{
	txt_enemigo2 = new Texture;
	txt_enemigo2->loadFromFile("coche3.jpg");
	spr_enemigo2=new Sprite;
	spr_enemigo2->setTexture(*txt_enemigo2);
	spr_enemigo2->setPosition(300,0);
	spr_enemigo2->setScale(50.f/spr_enemigo2->getTexture()->getSize().x,100.f/spr_enemigo2->getTexture()->getSize().y);
    velocidad.x=0;
    velocidad.y=3;
}

void enemigo2::actualizar(float delta_t)
{
	spr_enemigo2->setPosition(spr_enemigo2->getPosition().x + velocidad.x * delta_t,spr_enemigo2->getPosition().y + velocidad.y * delta_t);
	
}
