// PE11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SFML_STATIC
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
int main()
{
    //window create
    sf::RenderWindow window(sf::VideoMode(800, 600), "PE11 - SFML Scene");

    //rectangular ground
    sf::RectangleShape ground(sf::Vector2f(800.f, 200.f));
    ground.setFillColor(sf::Color(100, 200, 100));
    ground.setPosition(0.f, 400.f);

    //rectangular house
    sf::RectangleShape house(sf::Vector2f(200.f, 150.f));
    house.setFillColor(sf::Color::Blue);
    house.setPosition(300.f, 250.f);

    //sun, circle
    sf::CircleShape sun(50.f);
    sun.setFillColor(sf::Color::Yellow);
    sun.setPosition(600.f, 50.f);

    //roof uses triangle of convex shape
    sf::ConvexShape roof;
    roof.setPointCount(3);
    roof.setPoint(0, sf::Vector2f(300.f, 250.f));
    roof.setPoint(1, sf::Vector2f(500.f, 250.f));
    roof.setPoint(2, sf::Vector2f(400.f, 150.f));
    roof.setFillColor(sf::Color::Red);

    //loop when the window is running
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw shapes
        window.draw(ground);
        window.draw(house);
        window.draw(sun);
        window.draw(roof);

        // Display everything
        window.display();
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
