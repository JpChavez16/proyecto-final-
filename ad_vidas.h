#include <string>
#include <sstream>
#include<SFML\Graphics.hpp>
#include "vidas.h"
using namespace sf;

class Command{

    public:
		virtual void Execute()=0;

};

class ad_vidas : public Command
{
	private:
		vidas *vida;
		Command* ptr;
	 
	public:
		ad_vidas();
		void invocar();
		void ejecutar_command();
};
