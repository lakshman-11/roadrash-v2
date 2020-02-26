#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class Track
{
private:
	sf::RenderWindow& m_window;
	sf::Texture trackTxt[2];
	sf::RectangleShape trackmap[3];
	float ypos[3] = { -1080,0,1080 };

public:

	Track(sf::RenderWindow& window) : m_window(window) {};
	void loadTexture();
	void drawtrack();

};
