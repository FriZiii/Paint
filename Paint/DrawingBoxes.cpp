#include "DrawingBoxes.h"

DrawingBoxes::DrawingBoxes(sf::Vector2f position)
{
	this->position = position;

	size = sf::Vector2f(10, 10);
	body.setSize(size);

	body.setPosition(position);
	body.setFillColor(sf::Color::White);
	bool isClicked = false;
}

void DrawingBoxes::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}

void DrawingBoxes::Update(sf::RenderWindow& window, sf::Color color)
{
	if (sf::Mouse::getPosition(window).x > body.getGlobalBounds().left && sf::Mouse::getPosition(window).x < (body.getGlobalBounds().left + body.getGlobalBounds().width) && sf::Mouse::getPosition(window).y > body.getGlobalBounds().top && sf::Mouse::getPosition(window).y < (body.getGlobalBounds().top + body.getGlobalBounds().height))
	{
		body.setFillColor(sf::Color(199, 199, 199));
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			isClicked = true;
		}
	}
	else
	{
		body.setFillColor(sf::Color::White);
	}
	if (isClicked)
	{
		body.setFillColor(color);
	}
}