#include "Player.h"

Player::Player(){}


Player::Player(std::string name)
:m_player_name(name)
{

}

 Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
m_player_name=name;
}

void Player::Attack()
{
    std::cout<<"Player attacks \n";
}

