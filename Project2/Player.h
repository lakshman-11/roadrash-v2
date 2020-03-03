#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class Player
{
private:
	sf::RenderWindow& m_window;
	sf::Sprite playerRect;
	sf::Texture player;
	
public:

	Player(sf::RenderWindow& window) : m_window(window) {};
	sf::Sprite getsprite();
	void loadTexture();
	void drawPlayer(float&);
	void move(float&);
};


