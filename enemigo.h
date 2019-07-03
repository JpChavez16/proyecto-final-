#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include<stdlib.h>
#include<iostream>
#include<time.h>
using namespace sf;
 
class enemigo
{
	public:
		int posicion_x;
		int posicion_y;
		
		enemigo(int x, int y,std::string carro);
		Sprite get_sprite();
		void carro_mov();
		void carro_abajo();
		void reset();
		
		
	private:
		Texture txt_carro;
		Sprite spr_carro;
		std::string ima_carro;
};


