#pragma once
#include<SFML/Graphics.hpp>
#include"Player.h"
#include"collider.h"
#include"Track.h"
#include<iostream>
class game
{
private:
	sf::RenderWindow &m_window;
	
	Track* trackobject = new Track(m_window);
	Obstacle* obstacleobject = new Obstacle(m_window);
	Player* playerobj = new Player(m_window);
	float xpos = 800;
public:

	
	game(sf::RenderWindow& window);
	void loadonce();
	void update();
	void collision(sf::Sprite , sf::Sprite ,sf::Sprite );



};

