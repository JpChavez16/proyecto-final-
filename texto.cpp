#include "texto.h"
texto* texto::textu=NULL;

texto::texto(std::string titulo_vidas,std::string nombre_juego)
{
	fuente_texto=new Font;
    fuente_texto->loadFromFile("Minecrafter.ttf");
    text_texto1=new Text;
    text_texto2=new Text;
    text_texto1->setFont(*fuente_texto);
    text_texto2->setFont(*fuente_texto);
    text_texto1->setString(titulo_vidas);
    text_texto2->setString(nombre_juego);
    text_texto1->setPosition(50,100);
    text_texto2->setPosition(20,400);
}

texto* texto::obtenerTexto(std::string titulo_vidas,std::string nombre_juego){
    if(textu==NULL)
    {
        textu=new texto(titulo_vidas,nombre_juego);
    }
    return textu;
}

Text texto::show_vidas(){
    return *text_texto1;
}

Text texto::show_nombre(){
    return *text_texto2;
}
texto::~texto()
{
}
