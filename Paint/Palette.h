#pragma once
#include <SFML/Graphics.hpp>
#include "ColorPicker.h"
#include <vector>
class Palette
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;
	std::vector<ColorPicker>colorpicker;

public:
	Palette();
	void Draw(sf::RenderWindow& window);
	sf::Color GetColor(sf::RenderWindow& window)
	{
		for (ColorPicker colorpicker : colorpicker)
		{
			colorpicker.GetColor(window);
		}
	};
};

