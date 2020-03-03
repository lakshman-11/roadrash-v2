#include <SFML/Graphics.hpp>
#include"Track.h"
#include"Obstacle.h"
#include"Player.h"
#include"collider.h"
#include"game.h"
#include "audio.h"
#include<iostream>


int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "My window");

    void collision(sf::Sprite player, sf::Sprite carTexture, sf::Sprite truckTexture);
  

    Track trackobj(window);
    trackobj.loadTexture();
 
    Audio audioManager(100);

    //audioManager.loadBgMusic("audio.mp3");
    audioManager.load(Engine, "audio.wav");


    Obstacle obsObj(window);
    obsObj.loadTexture();

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
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
            audioManager.playSound(Engine);
       
        window.clear();
        
        trackobj.drawtrack();
        
    
        obj.update();
        

      // obsObj.callObstacle();

        trackobj.drawfont();
        window.display();
       
    }

    return 0;
}