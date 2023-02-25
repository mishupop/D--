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

 ItemPtr Player::createChestItems()
{
   weapon=nullptr;
    //Player_type player_type;
    switch (getPlayerType())
    {
    case Player_type::warior:
        {
       ItemPtr weapon = std::make_shared<Item>("attack", "battle_axe", 30, 0, 5);
        Inventory.push_back(std::move(weapon));
        std::cout<<"It's the Battle Axe of Gregor the Destroyer!!! \n";
        std::cout<<"Axe is added to inventory"<<std::endl;
        //weapon=battle_axe;
        break;
        }
    case Player_type::wizard:
        {
        ItemPtr weapon = std::make_shared<Item>("magic","magic_staff",10,30,10);
        Inventory.push_back(std::move(weapon));
        std::cout<<"It's the magic staff of Killtermoor!!! \n";
        std::cout<<"Staff is added to inventory"<<std::endl;
        //weapon=magic_staff;
        break;
        }
    case Player_type::rogue:
        {
        ItemPtr weapon = std::make_shared<Item> ("attack","machete",50,0,10);
        Inventory.push_back(weapon);
        std::cout<<"It's the machete of Yaangstllafaiyi!!! \n";
        std::cout<<"Machete is added to inventory"<<std::endl;
        //weapon=machete;
        return weapon;
        break;
        }
        
    }
    
     return weapon;
}

void Player::CheckInventory()
{
    for (auto &x:Inventory)
    {
        std::cout<< x->getitemName() <<x<<std::endl;
    }
}


/*void Player::clearInventory()
{
    for (auto &x:Inventory)
    {
        delete x;
    }
    Inventory.clear();
}*/

