#include "ad_vidas.h"

ad_vidas::ad_vidas()
{
	this->vida = new vidas();
}


void ad_vidas::invocar()
{
	ptr->Execute();
}

void ad_vidas::ejecutar_command()
{
	vida->show_vidas();
	vida->contador(3);
}

