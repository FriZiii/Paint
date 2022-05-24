#include "TopBar.h"
TopBar::TopBar()
{
	this->position = sf::Vector2f(0, 0);
	this->size = sf::Vector2f(1920, 75);
	body.setPosition(position);
	body.setSize(size);
	sf::Color semiblack(27, 27, 27);
	body.setFillColor(semiblack);
}
