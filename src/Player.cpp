#include "Player.h"

Player::Player(){}


Player::Player(std::string name,int damage,int health)
:m_PlayerName(name),
m_damage(damage),
m_health(health)
{

}

 Player::~Player()
{

}

void Player::getPlayerName(std::string name)
{
    std::cin>>name;
    m_PlayerName=name;
}
void choosePlayerType()
{
     Player You;
   std::string name;
   int choose;
    std::cout<<"Insert your player name: \n";    

    You.getPlayerName(name);

    std::cout<<"Choose player type: \n";
    std::cout<<"Warrior = 1 \n";
    std::cout<<"Wizard = 2 \n";
    std::cout<<"Rogue = 3 \n";


    
    std::cin>>choose;
    switch (choose)
    {
    case 1:
    std::cout<<"You are a warrior \n";
    break;
    case 2:
    std::cout<<"You are a wizard \n";
    break;
    case 3:
    std::cout<<"You are a rogue \n";
    
    default:
    std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
}
void Player::Attack()
{
    std::cout<<"Player attacks \n";
}

