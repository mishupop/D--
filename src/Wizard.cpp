#include "Wizard.h"



Wizard::~Wizard()
{
std::cout<<"wizard deletetd\n";
}

void Wizard::Attack()
{
    std::cout<<"A wizard attacks \n";
}
Wizard::Wizard(std::string name)
:Player(name)
{
    std::cout<<"wizard created\n";
}
