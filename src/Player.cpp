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

 /*ItemPtr Player::createChestItems()
{
   weapon=nullptr;
    
    switch (getPlayerType())
    {
    case Player_type::warior:
        {
       ItemPtr weapon = std::make_shared<Item>("attack", "battle_axe", 30, 0, 5);
        Inventory.push_back(weapon);
        std::cout<<"It's the Battle Axe of Gregor the Destroyer!!! \n";
        std::cout<<"Axe is added to inventory"<<std::endl;
        //weapon=battle_axe;
        break;
        }
    case Player_type::wizard:
        {
        ItemPtr weapon = std::make_shared<Item>("magic","magic_staff",10,30,10);
        Inventory.push_back(weapon);
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
}*/

ItemPtr Player::createChestItems() {
    weapon = nullptr;
    
    switch (getPlayerType()) 
    {
        case Player_type::warior: 
        {
            // generate a random integer between 0 and 2 (inclusive)
            int random_int = std::rand() % 3;
            
            // use a new switch statement to choose between three weapons
            switch (random_int) {
                case 0: {
                    ItemPtr weapon = std::make_shared<Item>("attack", "battle_axe", 30, 0, 5);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Battle Axe of Gregor the Destroyer!!! \n";
                    std::cout << "Axe is added to inventory" << std::endl;
                    break;
                }
                case 1: {
                    ItemPtr weapon = std::make_shared<Item>("attack", "longsword", 25, 0, 3);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Longsword of Sir Harold!!! \n";
                    std::cout << "Longsword is added to inventory" << std::endl;
                    break;
                }
                case 2: {
                    ItemPtr weapon = std::make_shared<Item>("attack", "warhammer", 35, 0, 7);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Warhammer of Throgg the Destroyer!!! \n";
                    std::cout << "Warhammer is added to inventory" << std::endl;
                    break;
                }
            }
            break;
        }
        case Player_type::wizard: 
        {
            int random_int = std::rand() % 3;
            
            switch (random_int) 
            {
                case 0: 
                {
                    ItemPtr weapon = std::make_shared<Item>("magic", "magic_staff", 10, 30, 10);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Magic Staff of Killtermoor!!! \n";
                    std::cout << "Staff is added to inventory" << std::endl;
                    break;
                }
                case 1: 
                {
                    ItemPtr weapon = std::make_shared<Item>("magic", "wizard_staff", 5, 25, 8);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Wizard Staff of Eldamar!!! \n";
                    std::cout << "Wizard staff is added to inventory" << std::endl;
                    break;
                }
                case 2: 
                {
                    ItemPtr weapon = std::make_shared<Item>("magic", "sorcerer_staff", 15, 35, 12);
                    Inventory.push_back(weapon);
                    std::cout << "It's the Sorcerer Staff of Zalthor!!! \n";
                    std::cout << "Sorcerer staff is added to inventory" << std::endl;
                    break;
                }
            }
            break;
        }
        case Player_type::rogue: 
        {
         
        int random_int = std::rand() % 3;
            
            switch (random_int) 
            {
                case 0: 
                {
                        ItemPtr weapon = std::make_shared<Item> ("attack","machete",50,0,10);
                    Inventory.push_back(weapon);
                    std::cout<<"It's the machete of Yaangstllafaiyi!!! \n";
                    std::cout<<"Machete is added to inventory"<<std::endl;                  
                    break;
                }
                case 1: 
                {
                    ItemPtr weapon = std::make_shared<Item> ("attack","dagger",43,0,0);
                    Inventory.push_back(weapon);
                    std::cout<<"It's the dagger of Yaangstllafaiyi!!! \n";
                    std::cout<<"Dagger is added to inventory"<<std::endl;                 
                    break;
                    }
                case 2: 
                {
                    ItemPtr weapon = std::make_shared<Item> ("attack","spear",55,0,5);
                    Inventory.push_back(weapon);
                    std::cout<<"It's the spear of Yaangstllafaiyi!!! \n";
                    std::cout<<"Spear is added to inventory"<<std::endl;               
                    break;
                }
            }
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


void Player::clearInventory()
{
    Inventory.clear();
}

