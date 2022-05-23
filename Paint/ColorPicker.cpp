#include "ColorPicker.h"

ColorPicker::ColorPicker(sf::Vector2f position, int i)
{
	this->isClicked = false;
	this->position = position;
	this->size = sf::Vector2f(50.0f, 50.0f);
	body.setPosition(position);
	body.setSize(size);
	sf::Color actuallColor = color[i];
	body.setFillColor(actuallColor);
}
