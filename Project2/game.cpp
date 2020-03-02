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
	playerobj->drawPlayer();
	collision(playerobj->getsprite(), obstacleobject->getcar());
	//std::cout << obstacleobject-> getcar().getPosition().y<<std::endl;
}

void game::collision(sf::Sprite player, sf::Sprite carTexture)
{
	if (player.getGlobalBounds().intersects(carTexture.getGlobalBounds()))
		std::cout << "collision";

}
