#pragma once
#include<SFML/Graphics.hpp>
#include"obstra.h"
#include<iostream>

class Obstacle
{
private:
	sf::RenderWindow& m_window;
	float carposx = 450, carposy=0, truckposx=750, truckposy=0;




public:

	Obstacle(sf::RenderWindow& window) : m_window(window) {};
	void callObstacle();

};

