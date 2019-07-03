#include<SFML\Graphics.hpp>
using namespace sf;

class enemigo2
{
	public:
		enemigo2();
		Sprite get_enemigo2(){return *spr_enemigo2;};
		void actualizar(float delta_t);
	private:
		Sprite *spr_enemigo2;
		Texture *txt_enemigo2;
		Vector2f velocidad;
};
