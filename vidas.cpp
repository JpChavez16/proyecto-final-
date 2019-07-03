#include "vidas.h"
using namespace sf;

vidas::vidas()
{
	
	
	fuente1=new Font();
	fuente1->loadFromFile("Minecrafter.ttf"); 
	texto_saludo=new Text();
	texto_vida=new Text();
	texto_saludo->setFont(*fuente1);
	texto_vida->setFont(*fuente1);
	texto_saludo->setString("Hola");
	texto_saludo->setPosition(50,100);
	
}

Text vidas::show_vidas()
{
	return *texto_saludo;
}

Text vidas::contador(int vidas)
{
   cadena="";
   cadena = static_cast<std::ostringstream*>(&(std::ostringstream() << vidas))->str();
   texto_vida->setString(cadena);
   texto_vida->setPosition(50,150);
   return *texto_vida;	 
}

