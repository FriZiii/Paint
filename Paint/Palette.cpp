#include "Palette.h"

Palette::Palette()
{
	this->position = sf::Vector2f(0, 0);
	this->size = sf::Vector2f(1920, 100);
	body.setPosition(position);
	body.setSize(size);
	sf::Color lightGreen(120, 198, 163);
	body.setFillColor(lightGreen);
	for (int i = 0; i < 3; i++)
	{
		sf::Vector2f position(1600+(i*55),25.0f);
		colorpicker.push_back(ColorPicker(position, i));
	}
}

void Palette::Draw(sf::RenderWindow& window)
{
	window.draw(body);
	for (ColorPicker colorpicker : colorpicker)
	{
		colorpicker.Draw(window);
	}
}
