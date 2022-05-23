#include <SFML/Graphics.hpp>
#include "DrawingBoxes.h"
#include "Palette.h"
#include "ColorPicker.h"

#include <vector>
#include <iostream>
int main()
{
    int x = 1920;
    int y = 1080;

    sf::RenderWindow window(sf::VideoMode(x, y), "Paint");

    Palette palette;

    std::vector<DrawingBoxes>drawingboxes;
    for (int i = 10; i < 108; i++)
    {
        for (int j = 0; j < 192; j++)
        {
            sf::Vector2f position(0.0f + j*10, 0.0f + i*10);
            drawingboxes.push_back(DrawingBoxes(position));
        }
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //Update
        for (DrawingBoxes& drawingboxes : drawingboxes)
            drawingboxes.Update(window);

        //Draw
        window.clear();
        for (DrawingBoxes& drawingboxes : drawingboxes)
            drawingboxes.Draw(window);

        palette.Draw(window);

        window.display();
    }

    return 0;
}