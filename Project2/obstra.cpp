#include"obstra.h"

void obstra::loadTexture()
{
}

void obstra::drawObstacle(int choice,float xpos,float ypos,float xsize,float ysize)
{
	sf::RectangleShape car;

	if(choice==1)
		car.setFillColor(sf::Color(168, 169, 173, 255));
	if(choice==2)
		car.setFillColor(sf::Color(0, 169, 173, 255));
	car.setSize(sf::Vector2f(xsize, ysize));
	car.setPosition(sf::Vector2f(xpos, ypos));
	
	m_window.draw(car);



}
