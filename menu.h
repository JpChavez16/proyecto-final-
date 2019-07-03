#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
#define MAX_NUMBER_OF_ITEMS 3
#define MAX_NUMBER_OF_ITEMSS 3

using namespace std;
using namespace sf;



class Menu{
	
	private:
	int selectedItemIndex;
	int selectedItemIndexOpc;
	Font font;
	Text menu[MAX_NUMBER_OF_ITEMS];
	Text opciones[MAX_NUMBER_OF_ITEMSS];
	
	public:
		Menu(float width, float height);
		~Menu();
		void dibujar(RenderWindow &window);
		void dibujar_opciones(RenderWindow &window);
		void configurar_opciones(RenderWindow &window);
		void MoveUp();
		void MoveDown();
		void MoveUpOpciones();
		void MoveDownOpciones();
		int GetPressedItem() {return selectedItemIndex;}
		int GetPressedItemOpc(){return selectedItemIndexOpc;}
		void atras(RenderWindow &window);
		

};
