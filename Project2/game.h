#pragma once
#include<SFML/Graphics.hpp>
#include"Player.h"
#include"Track.h"
#include"collider.h"
#include<iostream>
class game
{
private:
	sf::RenderWindow &m_window;
	
	Track* trackobject = new Track(m_window);
	Obstacle* obstacleobject = new Obstacle(m_window);
	Player* playerobj = new Player(m_window);
public:
	game(sf::RenderWindow& window) : m_window(window) {};
	void loadonce();
	void update();
	void collision(sf::Sprite player, sf::Sprite carTexture);



};

