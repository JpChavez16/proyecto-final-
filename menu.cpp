#include "menu.h"


Menu::Menu(float width, float height)
{
	
	
	
	if (!font.loadFromFile("fonts/zrnic___.ttf"))
	{
		system("echo No se puedo cargar la textura&pause");
	}
	
	menu[0].setFont(font);
	menu[0].setColor(sf::Color::Red);
	menu[0].setString("Jugar");
	menu[0].setPosition(400,280);
	menu[0].setOrigin(menu->getGlobalBounds().width/2, menu->getGlobalBounds().height/2);
	
	menu[1].setFont(font);
	menu[1].setColor(sf::Color::White);
	menu[1].setString("Opciones");
	menu[1].setPosition(400,320);
	menu[1].setOrigin(menu->getGlobalBounds().width/2, menu->getGlobalBounds().height/2);
	
	
	menu[2].setFont(font);
	menu[2].setColor(sf::Color::White);
	menu[2].setString("Salir");
	menu[2].setPosition(400,360);
	menu[2].setOrigin(menu->getGlobalBounds().width/2, menu->getGlobalBounds().height/2);
	
	
	opciones[0].setFont(font);
	opciones[0].setColor(sf::Color::Red);
	opciones[0].setString("Normal");
	opciones[0].setPosition(801,701);
	opciones[0].setOrigin(opciones->getGlobalBounds().width/2, opciones->getGlobalBounds().height/2);
	
	opciones[1].setFont(font);
	opciones[1].setColor(sf::Color::White);
	opciones[1].setString("Extremo");
	opciones[1].setPosition(801,701);
	opciones[1].setOrigin(opciones->getGlobalBounds().width/2, opciones->getGlobalBounds().height/2);
	
	opciones[2].setFont(font);
	opciones[2].setColor(sf::Color::White);
	opciones[2].setString("Atras");
	opciones[2].setPosition(801,701);
	opciones[2].setOrigin(opciones->getGlobalBounds().width/2, opciones->getGlobalBounds().height/2);
	
	selectedItemIndex=0;
	selectedItemIndexOpc=0;
	

}



void Menu::dibujar(RenderWindow &window)
{
	
	for(int i=0;i<MAX_NUMBER_OF_ITEMS;i++)
	{
		window.draw(menu[i]);
	}
}

void Menu::dibujar_opciones(RenderWindow &window)
{

	for(int i=0;i<MAX_NUMBER_OF_ITEMSS;i++)
	{
		window.draw(opciones[i]);
	}
}

void Menu::configurar_opciones(RenderWindow &window)
{
	for(int i=0;i<3;i++)
	{
		menu[i].setPosition(801,701);
	}
	opciones[0].setPosition(400,280);
	opciones[1].setPosition(400,320);
    opciones[2].setPosition(400,360);

}

void Menu::MoveUp()
{
	if(selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setColor(sf::Color::Red);
	}
}

void Menu::MoveDown()
{
	if(selectedItemIndex + 1 <MAX_NUMBER_OF_ITEMS)
	{
		menu[selectedItemIndex].setColor(sf::Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setColor(sf::Color::Red);
	}
}

void Menu::MoveUpOpciones()
{
	if(selectedItemIndexOpc - 1 >= 0)
	{
		opciones[selectedItemIndexOpc].setColor(sf::Color::White);
		selectedItemIndexOpc--;
		opciones[selectedItemIndexOpc].setColor(sf::Color::Red);
	}
}


void Menu::MoveDownOpciones()
{
	if(selectedItemIndexOpc + 1 <MAX_NUMBER_OF_ITEMSS)
	{
		opciones[selectedItemIndexOpc].setColor(sf::Color::White);
		selectedItemIndexOpc++;
		opciones[selectedItemIndexOpc].setColor(sf::Color::Red);
	}
}

void Menu::atras(RenderWindow &window)
{
	for(int i=0;i<3;i++)
	{
		opciones[i].setPosition(801,701);
	}
	menu[0].setPosition(400,280);
	menu[1].setPosition(400,320);
    menu[2].setPosition(400,360);
}

Menu::~Menu()
{
	
}




