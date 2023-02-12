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
   std::cout<<"rogue created\n"; 
}



