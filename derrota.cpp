#include "derrota.h"
derrota::derrota()
{
	text_derrota.loadFromFile("policia.jpg");
	spr_derrota.setTexture(text_derrota);
	spr_derrota.setPosition(600,400);
	spr_derrota.setScale(50.f/spr_derrota.getTexture()->getSize().x,100.f/spr_derrota.getTexture()->getSize().y);
    velocidad_derrota.x=0;
    velocidad_derrota.y=3;
}

void derrota::actualizar_derrota(float delta_t)
{
	spr_derrota.setPosition(spr_derrota.getPosition().x+velocidad_derrota.x * delta_t,spr_derrota.getPosition().y+velocidad_derrota.y);
	if (spr_derrota.getPosition().y>500)
	{
		spr_derrota.setPosition(200,0);
	}
}
