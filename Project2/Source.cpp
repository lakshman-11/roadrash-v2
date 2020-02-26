#include <SFML/Graphics.hpp>
#include"Track.h"
#include"Obstacle.h"
#include"Player.h"
#include<iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "My window");

    Track trackobj(window);
    trackobj.loadTexture();

    Obstacle obsObj(window);
    //Load texture

    Player playerObj(window);
    //Load texture

    
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            window.close();

        trackobj.drawtrack();
        window.clear();

        trackobj.drawtrack();

        obsObj.callObstacle();

        playerObj.drawPlayer();

        window.display();
       
    }

    return 0;
}