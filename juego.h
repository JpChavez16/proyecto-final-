#include <SFML/Graphics.hpp>
#include<stdlib.h>
#include<time.h>
#include "enemigo.h"
#include "jugador.h"
#include "vidas.h"
#include "texto.h"
#include "especial.h"
using namespace sf;

class juego
{
	public:
		juego(Vector2f resolucion,String titulo);
		void gameLoop();
		void cargar_graficos();	
		void procesar_evento();
		void procesar_colisiones();

	private:
		RenderWindow *ventana1;
		int fps;
		bool game_over;
		Texture txt_fondo;
		Sprite spr_fondo;
		Event *evento1;
		// jugador principal para dibjar
		jugador *jugador1;
		
		//Enemigos
		enemigo *carro1;
		enemigo *carro2;
		enemigo *carro3;
		enemigo *carro4;
		//Tiempos
		Clock *reloj1;
		Time *tiempo1;
		float tiempo2;
		
		//vidas
		vidas *vida_jugador;
		int vida_play;
		
		//Enemigos especiales
		curar *ambulancia;
		derrota *policia;
		especial *especiales; 

		//Textos
		texto *text1;

	
};

