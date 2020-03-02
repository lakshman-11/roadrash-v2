#include <SFML/Graphics.hpp>
#include"Track.h"
#include"Obstacle.h"
#include"Player.h"
#include"collider.h"
#include"game.h"
#include<iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "My window");
    void collision(sf::Sprite player, sf::Sprite carTexture, sf::Sprite truckTexture);

  

    Track trackobj(window);
    trackobj.loadTexture();

    Obstacle obsObj(window);
    obsObj.loadTexture();

    Player playerObj(window);
    playerObj.loadTexture();
    //Load texture
    game obj(window);
    obj.loadonce();
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

       
        window.clear();
        obj.update();
        
        //trackobj.drawtrack();

       // obsObj.callObstacle();

       // playerObj.drawPlayer();
        window.display();
       
    }

    return 0;
}