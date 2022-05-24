#include "ColorsPalett.h"
#include <iostream>
ColorsPalett::ColorsPalett(sf::Vector2f position, int i)
{
	this->i = i;
	this->position = position;
	this->size = sf::Vector2f(50.0f, 50.0f);
	body.setSize(size);
	body.setPosition(position);
	this->body.setFillColor(this->colors[i]);
}

int ColorsPalett::getColor(sf::RenderWindow& window)
{
	if (sf::Mouse::getPosition(window).x > body.getGlobalBounds().left && sf::Mouse::getPosition(window).x < (body.getGlobalBounds().left + body.getGlobalBounds().width) && sf::Mouse::getPosition(window).y > body.getGlobalBounds().top && sf::Mouse::getPosition(window).y < (body.getGlobalBounds().top + body.getGlobalBounds().height))
	{
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			return i;
		}
	}
}
