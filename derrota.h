#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;

class derrota
{
	public:
        derrota();
        Texture text_derrota;
        Sprite spr_derrota;
        void actualizar_derrota(float delta_t);
        Vector2f velocidad_derrota;
};




