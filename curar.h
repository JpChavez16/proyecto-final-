#include<SFML\Graphics.hpp>
using namespace sf;

class curar
{
	public:
		curar();
		void actualizar_curar(float delta_t);
		Texture txt_curar;
		Sprite spr_curar;
		Vector2f velocidad_curar;
};
