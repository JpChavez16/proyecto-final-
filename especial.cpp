#include "especial.h"
especial::especial(curar ambulancia,derrota policia)
{
    this->ambulancia=&ambulancia;
    this->policia=&policia;
}
Sprite especial::get_ambulancia()
{
    return ambulancia->spr_curar;
}
Sprite especial::get_policia()
{
    return policia->spr_derrota;
}
void especial::movimiento(int mov_dos)
{
     ambulancia->actualizar_curar(mov_dos);
     policia->actualizar_derrota(mov_dos);
}

