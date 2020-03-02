#include "collider.h"

void collider::collision(sf::Sprite player, sf::Sprite carTexture, sf::Sprite truckTexture)
{
	if (player.getGlobalBounds().intersects(carTexture.getGlobalBounds()))
		std::cout << "collision";
}
