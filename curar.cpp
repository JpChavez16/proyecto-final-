#include "curar.h"

curar::curar()
{
	
	txt_curar.loadFromFile("salva.jpg");
	spr_curar.setTexture(txt_curar);
	spr_curar.setPosition(500,300);
	spr_curar.setScale(50.f/spr_curar.getTexture()->getSize().x,100.f/spr_curar.getTexture()->getSize().y);
    velocidad_curar.x=0;
    velocidad_curar.y=3;
}
void curar::actualizar_curar(float delta_t)
{
	spr_curar.setPosition(spr_curar.getPosition().x+velocidad_curar.x * delta_t,spr_curar.getPosition().y+velocidad_curar.y);
	if (spr_curar.getPosition().y>500)
	{
		spr_curar.setPosition(600,0);
	}
}


