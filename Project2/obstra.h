#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class obstra
{
private:
	sf::RenderWindow& m_window;
	sf::Texture carTxt[2];
	static sf::Texture carTexture;

public:
	obstra(sf::RenderWindow& window) : m_window(window) {};
	static void loadTexture();
	

};

