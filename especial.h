//inyeccion de dependencia
#include "curar.h"
#include "derrota.h"
using namespace sf;

class especial
{
private:
    curar *ambulancia;
    derrota *policia;
public:
    especial(curar ambulancia, derrota policia);
    Sprite get_ambulancia();
    Sprite get_policia();
    void movimiento(int);
    
};
