#include "Warrior.h"


Warrior::~Warrior()
{
std::cout<<"warrior deletetd\n";
}

void Warrior::Attack()
{
    std::cout<<"A warrior attacks \n";
}
Warrior::Warrior(std::string name)
:Player(name)
{
   std::cout<<"warrior created\n"; 
}
