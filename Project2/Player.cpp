#include "Player.h"
#include "collider.h"

sf::Sprite Player::getsprite()
{
	return playerRect;
}

void Player::loadTexture()
{
	player.loadFromFile("player.png");
}

void Player::drawPlayer()
{
	/*sf::RectangleShape playerRect;
	playerRect.setFillColor(sf::Color(255, 0, 0, 255));
	playerRect.setSize(sf::Vector2f(100, 100));*/
	
	
	
	playerRect.setTexture(player);
	
	//void collision(player);

		
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		move();

	playerRect.setPosition(sf::Vector2f(xpos, 700));
	m_window.draw(playerRect);

}

void Player::move()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		xpos--;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		xpos++;

}
