#include "Palette.h"

Palette::Palette()
{
	this->position = sf::Vector2f(0, 0);
	this->size = sf::Vector2f(1920, 100);
	body.setPosition(position);
	body.setSize(size);
	sf::Color lightGreen(120, 198, 163);
	body.setFillColor(lightGreen);
}
