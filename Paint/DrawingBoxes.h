#pragma once
#include <SFML/Graphics.hpp>
class DrawingBoxes
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;
	sf::Color color;
	bool isClicked = false;

public:
	DrawingBoxes(sf::Vector2f position);
	void Draw(sf::RenderWindow &window);
	void Update(sf::RenderWindow& window, sf::Color color);
};

