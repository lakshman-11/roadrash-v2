#include"obstra.h"

void obstra::loadTexture()
{
	obstra::
}

void obstra::drawObstacle(int choice,float xpos,float ypos,float xsize,float ysize)
{
	sf::Sprite car;
	
	car.setTexture(carTexture);
	car.setScale(0.2f, 0.2f);
	car.setPosition(sf::Vector2f(xpos, ypos));


	if (choice == 1)
	{
		
		car.setTexture(carTexture);
		car.setScale(0.2f, 0.2f);
		car.setPosition(sf::Vector2f(xpos, ypos));

	}
		
	if (choice == 2)
	{
		car.setTexture(carTexture);
		car.setScale(0.3f, 0.4f);
		car.setPosition(sf::Vector2f(xpos, ypos));

		}
	
	m_window.draw(car);



}