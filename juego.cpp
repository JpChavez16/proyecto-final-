#include "juego.h"
#include<string>
#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<time.h>
using namespace sf;using namespace std;
juego::juego(Vector2f resolucion,String titulo)
{
	srand(time(NULL));
	int enemigos_mov=250+rand()%(601-250);
	
	game_over=false;
	fps=60;
	ventana1=new RenderWindow(VideoMode(resolucion.x,resolucion.y),titulo);
	ventana1->setFramerateLimit(fps);
	
	evento1=new Event;
	//Tiempos
	reloj1=new Clock();
	tiempo1=new Time();
	  
	//Enemigos
	carro1=new enemigo(250,0,"coche1.jpg");
	carro2=new enemigo(340,0,"coche2.jpg");
	carro3=new enemigo(340,0,"coche3.jpg");
	//Jugador
	jugador1= new jugador();
    //Vidas
    vida_jugador=new vidas();
    vida_play=5;
    //Textos
	text1 = texto::obtenerTexto("VIDAS","Gear Speed");
    //enemigos especiales
    policia = new derrota();
	ambulancia = new curar();
	especiales = new especial(*ambulancia,*policia);
    //carga graficos en esta clase
	cargar_graficos();
	gameLoop();
}

void juego::gameLoop()
{
	
	while (!game_over)
	{
		
		int num;
		srand(time(NULL));
		num=250+rand()%(501-250);
		ventana1->clear();
		procesar_evento();
		ventana1->draw(spr_fondo);


		ventana1->draw(especiales->get_ambulancia());
		ventana1->draw(especiales->get_policia());
		
		//ventana1->draw(vida_jugador->show_vidas());
		ventana1->draw(vida_jugador->contador(vida_play));
		ventana1->draw(text1->show_nombre());
		ventana1->draw(text1->show_vidas());
		procesar_colisiones();
        *tiempo1= reloj1->getElapsedTime();
        //Aparicion
		if (tiempo1->asSeconds()>1)
		{
			ventana1->draw(carro1->get_sprite());
	    }
		if (tiempo1->asSeconds()>4)
		{
            //carro2=new enemigo(340,0,"coche2.jpg");
			ventana1->draw(carro2->get_sprite());
	    }
		if (tiempo1->asSeconds()>7)
		{
			ventana1->draw(carro3->get_sprite());
	    }
		if (vida_play<=0)
		{
			
			exit(1);
		}
		
		jugador1->jugador_movimiento();
		especiales->movimiento(2);
		ventana1->draw(jugador1->get_jugador());
	
		ventana1->display();
	}
}

void juego::cargar_graficos()
{
	
	
	txt_fondo.loadFromFile("pista.jpg");
	spr_fondo.setTexture(txt_fondo);
	spr_fondo.setScale((float)ventana1->getSize().x/txt_fondo.getSize().x,(float)ventana1->getSize().y/txt_fondo.getSize().y);
}

void juego::procesar_evento()
{
	while(ventana1->pollEvent(*evento1))
	
	{
		switch(evento1->type)
		{
			case Event::Closed:
			    ventana1->close();
			    exit(1);
			    break;		
		}
		
	}
}

void juego::procesar_colisiones()
{
	if(jugador1->get_jugador().getGlobalBounds().intersects(carro1->get_sprite().getGlobalBounds()))
	{
		vida_play=vida_play-1;
		vida_jugador->contador(vida_play);
		delete carro1;
		carro1=new enemigo(250,-12,"coche1.jpg");
	}
	else if(jugador1->get_jugador().getGlobalBounds().intersects(carro2->get_sprite().getGlobalBounds()))
	{
		vida_play=vida_play-1;
		vida_jugador->contador(vida_play);
		delete carro2;
		carro2=new enemigo(500,-10,"coche2.jpg");
	}
    else if(jugador1->get_jugador().getGlobalBounds().intersects(especiales->get_ambulancia().getGlobalBounds()))
	{
		vida_play=vida_play+1;
		vida_jugador->contador(vida_play);
	}
	else if(jugador1->get_jugador().getGlobalBounds().intersects(especiales->get_policia().getGlobalBounds()))
	{
		vida_play=vida_play-3;
		vida_jugador->contador(vida_play);
	}
}

