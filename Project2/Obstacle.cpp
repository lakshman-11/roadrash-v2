#include "Obstacle.h"

void Obstacle::loadTexture()
{
	carTexture.loadFromFile("car1.png");
	truckTexture.loadFromFile("truck.png");
}

void Obstacle::drawObstacle(int choice, float xpos, float ypos, float xsize, float ysize)
{
	sf::Sprite car;
	
	if (choice == 1)
	{
		car.setTexture(carTexture);
		car.setScale(0.2f, 0.2f);
		car.setPosition(sf::Vector2f(xpos, ypos));
		m_window.draw(car);
	}

	if (choice == 2)
	{
		car.setTexture(truckTexture);
		car.setScale(0.3f, 0.4f);
		car.setPosition(sf::Vector2f(xpos, ypos));
		m_window.draw(car);
	}
	
}

void Obstacle::callObstacle()
{
	
	
	drawObstacle(2,truckposx, truckposy, 200, 500);
	drawObstacle(1, carposx, carposy, 150, 150);

	carposy+=speed;
	truckposy += speed;

	if (carposy >= 1080)
		carposy = -1080;

	if (truckposy >= 1080)
		truckposy = -1080;
	std::cout << carposy<<std::endl;
	score += speed;

	if (score % 10000 == 0)
		speed++;
	
}

sf::Sprite Obstacle::getcar()
{
	return car ;
}

/*sf::Sprite Obstacle::gettruck()
{
	return truck;
}*/
