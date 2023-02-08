#include "Warrior.h"


Warrior::~Warrior()
{

}

void Warrior::Attack()
{
    std::cout<<"A warrior attacks \n";
}
Warrior::Warrior(std::string name)
:Player(name)
{
    
}
