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

sf::Color ColorPicker::GetColor(sf::RenderWindow& window)
{
	if (sf::Mouse::getPosition(window).x > body.getGlobalBounds().left && sf::Mouse::getPosition(window).x < (body.getGlobalBounds().left + body.getGlobalBounds().width) && sf::Mouse::getPosition(window).y > body.getGlobalBounds().top && sf::Mouse::getPosition(window).y < (body.getGlobalBounds().top + body.getGlobalBounds().height))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			isClicked = true;
		}
	}
	else
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			isClicked = false;
		}
	}

	if (isClicked)
	{
		return actuallcolor;
	}
}
