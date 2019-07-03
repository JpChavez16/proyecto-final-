#include "enemigo.h"
#include<stdlib.h>
#include<string>
#include<iostream>
#include<sstream>
#include<SFML\Graphics.hpp>
enemigo::enemigo(int x,int y,std::string carro)
{
	this->posicion_x = x;
	this->posicion_y= y;
	this->ima_carro=carro;
	
    carro_mov();
    
}


Sprite enemigo::get_sprite()
{
	this->carro_mov();
	return spr_carro;
}

void enemigo::carro_mov()
{
	
	txt_carro.loadFromFile(ima_carro);//"coche"+"int"
	spr_carro.setTexture(txt_carro);
	spr_carro.setPosition(this->posicion_x,this->posicion_y);
	spr_carro.setScale(50.f/spr_carro.getTexture()->getSize().x,100.f/spr_carro.getTexture()->getSize().y);
    carro_abajo();
	
}
void enemigo::carro_abajo()
{
	int num;
	srand(time(NULL));
	this->posicion_y=this->posicion_y+2;
	if(this->posicion_y==600)
	{
		for(int i=0;i<2;i++)
		{
			num=250+rand()%(601-250);
		}
		this->posicion_y=0;
		this->posicion_x=num;
			
	}
	
}
