#include "Track.h"

void Track::loadTexture()
{
	trackTxt[0].loadFromFile("track.png");
	trackTxt[1].loadFromFile("track2.png");
	for(int i = 0; i < 3; i++)
		trackmap[i].setTexture(&trackTxt[std::rand() % 2]);
}

void Track::drawtrack()
{
	for (int i = 0; i < 3; i++)
	{
		
		trackmap[i].setFillColor(sf::Color(255, 255, 255, 255));
		trackmap[i].setSize(sf::Vector2f(1920, 1080));
	}
		
	trackmap[0].setPosition(sf::Vector2f(0, ypos[0]));
	trackmap[1].setPosition(sf::Vector2f(0, ypos[1]));
	trackmap[2].setPosition(sf::Vector2f(0, ypos[3]));
	
	


	for (int i = 0; i < 3; i++)
	{
		ypos[i]++;
		if (ypos[i] >= 1080)
		{
			trackmap[i].setTexture(&trackTxt[std::rand() % 2]);
			ypos[i] = -1080;
		}
			
	}
	for(int i=0;i<3;i++)
		m_window.draw(trackmap[i]);
}