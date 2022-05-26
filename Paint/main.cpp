#include <SFML/Graphics.hpp>

#include "DrawingBoxes.h"
#include "LeftBar.h"
#include "TopBar.h"
#include "ColorsPalett.h"

#include <vector>
#include <iostream>

int main()
{
    int x = 1920;
    int y = 1050 - 23; // 23 is window app menu

    sf::RenderWindow window(sf::VideoMode(x, y), "Paint");

    LeftBar leftbar;
    TopBar topBar;

    //Color picker
    int color = -1;
    std::vector<ColorsPalett> colorspalett;
    int k = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sf::Vector2f position(10+(j*60), 100 + (i*60));
            colorspalett.push_back(ColorsPalett(position,k));
            k++;
        }
    }

    //Drawing panel
    std::vector<DrawingBoxes>drawingboxes;
    for (int i = 0; i < 102; i++)
    {
        for (int j = 0; j < 192; j++)
        {
            sf::Vector2f position(130.0f + (j*10), 75.0f + (i*10));
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

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            for (ColorsPalett& colorspalett : colorspalett)
                color = colorspalett.getColor(window);
        }


        for (DrawingBoxes& drawingboxes : drawingboxes)
            if(drawingboxes.isPressed(window))
                drawingboxes.Update(window, color);

        //Draw
        window.clear();
        leftbar.Draw(window);
        topBar.Draw(window);

        for (DrawingBoxes& drawingboxes : drawingboxes)
            drawingboxes.Draw(window);

        for (ColorsPalett& colorspalett : colorspalett)
            colorspalett.Draw(window);

        window.display();
    }

    return 0;
}