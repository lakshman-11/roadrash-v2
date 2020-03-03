#include "Player.h"

sf::Sprite Player::getsprite()
{
	return playerRect;
}

void Player::loadTexture()
{
	player.loadFromFile("player.png");
}

void Player::drawPlayer(float& xpos)
{
	/*sf::RectangleShape playerRect;
	playerRect.setFillColor(sf::Color(255, 0, 0, 255));
	playerRect.setSize(sf::Vector2f(100, 100));*/
	
	
	
	playerRect.setTexture(player);
	
	//void collision(player);

		
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		move(xpos);

	playerRect.setPosition(sf::Vector2f(xpos, 700));
	m_window.draw(playerRect);

}

void Player::move(float& xpos)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		xpos-=5;
		if (xpos <= 402)
			xpos = 402;
	
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		xpos+=5;
	if (xpos >= 1371)
		xpos = 1371;
	//std::cout << xpos << std::endl;
}
