#pragma once
#include <SFML/Graphics.hpp>

class ColorPicker
{
	sf::RectangleShape body;
	sf::Vector2f position;
	sf::Vector2f size;
	sf::Color color[3] = { (sf::Color(255,0,0)), (sf::Color(0,255,0)), (sf::Color(0,0,255))};
	sf::Color actuallcolor;
	bool isClicked;

public:
	ColorPicker(sf::Vector2f position, int i);
	void Draw(sf::RenderWindow & window){ window.draw(body); }
	sf::Color GetColor(sf::RenderWindow& window);
};

