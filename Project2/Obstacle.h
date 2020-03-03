#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class Obstacle
{
private:
	sf::RenderWindow& m_window;
	float carposx = 450, carposy=0, truckposx=750, truckposy=0;
	int speed = 10;
	int score =0;
	sf::Texture carTexture,truckTexture;

	sf::Sprite car;
	sf::Sprite truck;


public:

	Obstacle(sf::RenderWindow& window) : m_window(window) {};
	void loadTexture();
	void drawObstacle(int choice, float xpos, float ypos, float xsize, float ysize);
	void callObstacle();
	sf::Sprite getcar();
	sf::Sprite gettruck();


};

