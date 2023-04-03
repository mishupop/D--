#include "Warrior.h"


Warrior::~Warrior()
{
//std::cout<<"warrior deletetd\n";
}

void Warrior::Attack()
{
    std::cout<<"The warrior attacks \n";
}
Warrior::Warrior(std::string name)
:Player(name)
{
    setHealth(50);
    setDamage(34);
    this->player_type=Player_type::warior;
   //std::cout<<"warrior created\n"; 
}
