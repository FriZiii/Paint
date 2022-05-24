#pragma once
#include <SFML/Graphics.hpp>
class DrawingBoxes
{
	sf::RectangleShape body;
	sf::Vector2f size;
	sf::Vector2f position;
	bool isClicked = false;

	sf::Color colors[18] = {
		sf::Color/*red*/(237, 57, 63),     sf::Color /*redlight*/(255, 89, 94),
		sf::Color /*pink*/(255, 115, 166), sf::Color /*pinklight*/(255, 138, 181),
		sf::Color /*yellow*/(255, 188, 7), sf::Color /*yellowlight*/(255, 202, 58),
		sf::Color /*green*/(73, 163, 18),  sf::Color /*greenlight*/(138, 201, 38),
		sf::Color /*blue*/(20, 107, 161),  sf::Color /*bluelight*/(25, 130, 196),
		sf::Color /*purple*/(89, 38, 158), sf::Color /*purplelight*/(106, 76, 147),
		sf::Color /*brown*/(119, 73, 54),  sf::Color /*brownlight*/(157, 107, 83),
		sf::Color /*grey*/(73, 80, 87),    sf::Color /*greylight*/(108, 117, 125),
		sf::Color /*black*/(0, 0, 0),      sf::Color /*white*/(255, 255, 255),
	};


public:
	DrawingBoxes(sf::Vector2f position);
	void Draw(sf::RenderWindow &window);
	void Update(sf::RenderWindow& window, int k);
};

