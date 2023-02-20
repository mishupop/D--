#include "Rogue.h"



Rogue::~Rogue()
{
std::cout<<"rogue deleted\n";
}

void Rogue::Attack()
{
    std::cout<<"A rogue attacks \n";
}


Rogue::Rogue(std::string name)
:Player(name)
{
    setHealth(70);
    setDamage(55);
    this->player_type=Player_type::rogue;
   std::cout<<"rogue created\n"; 
}



