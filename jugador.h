#include<SFML\Graphics.hpp>
using namespace sf;

class jugador
{
	public:
		jugador();
		void cargar_imagen();
		Sprite get_jugador();
		void jugador_movimiento();
	private:
	    Texture txt_principal;
		Sprite spr_principal;
};
