#pragma once
#include <SFML/Graphics.hpp>
class TopBar
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;
public:
	TopBar();
	void Draw(sf::RenderWindow& window) { window.draw(body); }
};

