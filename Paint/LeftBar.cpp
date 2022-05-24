#include "LeftBar.h"

LeftBar::LeftBar()
{
	this->position = sf::Vector2f(0, 75);
	this->size = sf::Vector2f(130, 1005);
	body.setPosition(position);
	body.setSize(size);
	sf::Color semiblack(32, 32, 32);
	body.setFillColor(semiblack);
}
