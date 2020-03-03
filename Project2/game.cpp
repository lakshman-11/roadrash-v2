#include "game.h"

void game::loadonce()
{
	trackobject->loadTexture();
	obstacleobject->loadTexture();
	playerobj->loadTexture();
}

void game::update()
{

	trackobject->drawtrack();
	obstacleobject->callObstacle();
	playerobj->drawPlayer(xpos);
	collision(playerobj->getsprite(), obstacleobject->getcar(),obstacleobject->gettruck());
	//std::cout << obstacleobject-> getcar().getPosition().y<<std::endl;
}

game::game(sf::RenderWindow& window) : m_window(window) {
	Player playerObj(window);
	playerObj.loadTexture();
}


void game::collision(sf::Sprite player, sf::Sprite carTexture, sf::Sprite truckTexture)
{
	if (player.getGlobalBounds().intersects(carTexture.getGlobalBounds()))
	{
		//std::cout << "collision\n";
		xpos = xpos + 50;
	}

	if (player.getGlobalBounds().intersects(truckTexture.getGlobalBounds()))
	{
		xpos = xpos + 50;
	}
}

