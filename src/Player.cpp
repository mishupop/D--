#include "Player.h"

Player::Player() {};


Player::Player(std::string name,int damage,int health)
:m_PlayerName(name),
m_damage(damage),
m_health(health)
{
//std::cin>> name;
}

 Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
    std::cin>>name;
    m_PlayerName=name;
}

void Player::Attack()
{
    std::cout<<"Player attacks \n";
}

