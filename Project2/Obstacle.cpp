#include "Obstacle.h"

void Obstacle::callObstacle()
{
	obstra car(m_window);

	car.drawObstacle(1,carposx,carposy,150,150);
	
	obstra truck(m_window);
	truck.drawObstacle(2,truckposx, truckposy, 200, 500);

	carposy++;
	truckposy++;

	if (carposy >= 1080)
		carposy = -1080;

	if (truckposy >= 1080)
		truckposy = -1080;


}
