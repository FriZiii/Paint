#pragma once
#include <SFML/Graphics.hpp>
#include "ColorPicker.h"
#include <vector>
class Palette
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;

public:
	Palette();
	void Draw(sf::RenderWindow& window){window.draw(body); }
};

