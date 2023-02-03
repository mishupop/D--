#include "Player.h"


Player::Player(std::string name,int damage,int health)
:m_PlayerName(name)
{
std::cin>> name;
}

 Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
    m_PlayerName=name;
}

void Player::Attack()
{
    std::cout<<"Player attacks \n";
}