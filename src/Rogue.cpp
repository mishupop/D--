#include "Rogue.h"



Rogue::~Rogue()
{

}

void Rogue::Attack()
{
    std::cout<<"A rogue attacks \n";
}


Rogue::Rogue(std::string name)
:Player(name)
{
    
}
