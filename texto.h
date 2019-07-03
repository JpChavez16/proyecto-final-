//singletown
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;

class texto
{
private:
    
    Font *fuente_texto;
    Text *text_texto1;
	Text *text_texto2;
	static texto *textu;
    texto(std::string,std::string);

public:
    static texto *obtenerTexto(std::string,std::string);
    Text show_vidas();
	Text show_nombre();
    ~texto();
};
