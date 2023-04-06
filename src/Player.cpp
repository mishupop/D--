#include "Player.h"

Player::Player(){}


Player::Player(std::string name)
:m_player_name(name)
{
//std::cout<<"player created\n";
++count;
}

 Player::~Player()
{
//std::cout<<"player deleted\n";
}


void Player::setPlayerName(std::string name)
{
m_player_name=name;
}

 //virtual  member function that displays who attacks/functie virtuala ce printeaza cine ataca
void Player::Attack()
{
    std::cout<<"Player attacks \n";
}

//method that creates weapon objects/metoda ce creaaza obiecte de arme
ItemPtr Player::createChestItems() {
    weapon = nullptr;
    
    switch (getPlayerType()) 
    {
        case Player_type::warior: 
        {
            int random_int = std::rand() % 3;
            
            switch (random_int) {
                case 0: {
                    weapon = std::make_shared<Item>("attack", "battle_axe", 30, 0, 5);
                    Inventory.push_back(weapon);
                    warriorWeaponsText();
                    std::cout << "It's the Battle Axe of Gregor the Destroyer!!! \n";
                    std::cout << "Axe is added to inventory" << std::endl;
                    break;
                }
                case 1: {
                    weapon = std::make_shared<Item>("attack", "longsword", 25, 0, 3);
                    Inventory.push_back(weapon);
                    warriorWeaponsText();
                    std::cout << "It's the Longsword of Eaustace the Quick!!! \n";
                    std::cout << "Longsword is added to inventory" << std::endl;
                    break;
                }
                case 2: {
                    weapon = std::make_shared<Item>("attack", "warhammer", 35, 0, 7);
                    Inventory.push_back(weapon);
                    warriorWeaponsText();
                    std::cout << "It's the Warhammer of Throgg the Destructor!!! \n";
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
                    weapon = std::make_shared<Item>("magic", "magic_staff", 10, 30, 10);
                    Inventory.push_back(weapon);
                    wizardWeaponsText();
                    std::cout << "It's the Magic Staff of Killtermoor!!! \n";
                    std::cout << "Staff is added to inventory" << std::endl;
                    break;
                }
                case 1: 
                {
                    weapon = std::make_shared<Item>("magic", "wand", 5, 25, 8);
                    Inventory.push_back(weapon);
                    wizardWeaponsText();
                    std::cout << "It's the Wand of Eldamar!!! \n";
                    std::cout << "Wizard staff is added to inventory" << std::endl;
                    break;
                }
                case 2: 
                {
                    weapon = std::make_shared<Item>("magic", "sorcerer_staff", 15, 35, 12);
                    Inventory.push_back(weapon);
                    wizardWeaponsText();
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
                    weapon = std::make_shared<Item> ("attack","machete",50,0,10);
                    Inventory.push_back(weapon);
                    rogueWeaponsText();
                    std::cout<<"It's the machete of Yaangstllafaiyi!!! \n";
                    std::cout<<"Machete is added to inventory"<<std::endl;                  
                    break;
                }
                case 1: 
                {
                    weapon = std::make_shared<Item> ("attack","dagger",43,0,0);
                    Inventory.push_back(weapon);
                    rogueWeaponsText();
                    std::cout<<"It's the dagger of Kethria!!! \n";
                    std::cout<<"Dagger is added to inventory"<<std::endl;                 
                    break;
                }
                case 2: 
                {
                    weapon = std::make_shared<Item> ("attack","spear",55,0,5);
                    Inventory.push_back(weapon);
                    rogueWeaponsText();
                    std::cout<<"It's the spear of Vaeleni!!! \n";
                    std::cout<<"Spear is added to inventory"<<std::endl;               
                    break;
                }
            }
           break;
        }
        
    }
    std::cout.flush();
    getchar(); 
    Clear();
    return weapon;
    
}

//method that allows you to check your weapons/metoda care iti permite sa vizualizezi armele
void Player::CheckInventory()
{
    for (auto &x:Inventory)
    {
        x->getattackPower();
        x->getMagicPower();
        x->getdefence();
        std::cout<< x->getitemName() <<x<<std::endl;
    }
}


//method to clear your inventory/metoda pentru stargerea inventarului
void Player::clearInventory()
{
    Inventory.clear();
}

//method that adds the weapon's attack power to the player's damage/metoda care aduna puterea de atac a armei cu a jucatorului
int Player::totalAttackPower()
{
   int totalAttack = this->getDamage();
   for (auto weapon:Inventory)
   {
        totalAttack +=weapon->getattackPower() + weapon->getMagicPower();
   }
   return totalAttack;//
}

//method that add's weapon's defence to the player's health/metoda ce adauga apararea armei la sanatatea jucatorului
int Player::totalHealth()
{
    int totalHealth = this->getHealth();
    for (auto weapon:Inventory)
    {
        totalHealth +=weapon->getdefence();
    }
    return totalHealth;
}





