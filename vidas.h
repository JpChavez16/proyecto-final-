#include <string>
#include <sstream>
#include<SFML\Graphics.hpp>
using namespace sf;



class vidas
{
	public:
		vidas();
		Text show_vidas();
		Text contador(int vidas);
	protected:
		Font *fuente1;
		Text *texto_saludo;
		Text *texto_vida;
		std::string cadena;
};



