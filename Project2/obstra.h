#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class obstra
{
private:
	sf::RenderWindow& m_window;
	sf::Texture carTxt[2];

public:

	obstra(sf::RenderWindow& window) : m_window(window) {};
	void loadTexture();
	void drawObstacle(int choice,float xpos, float ypos, float xsize, float ysize);

};

