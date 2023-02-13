#include "Player.h"

Player::Player(){}


Player::Player(std::string name)
:m_player_name(name)
{
std::cout<<"player created\n";
}

 Player::~Player()
{
std::cout<<"player deleted\n";
}

void Player::setPlayerName(std::string name)
{
m_player_name=name;
}


void Player::Attack()
{
    std::cout<<"Player attacks \n";
}

