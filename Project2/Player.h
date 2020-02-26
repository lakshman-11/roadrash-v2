#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class Player
{
private:
	sf::RenderWindow& m_window;
	float xpos = 800;
public:

	Player(sf::RenderWindow& window) : m_window(window) {};
	void drawPlayer();
	void move();
};


