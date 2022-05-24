#pragma once
#include <SFML/Graphics.hpp>
class LeftBar
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;

public:
	LeftBar();
	void Draw(sf::RenderWindow& window){window.draw(body); }
};

