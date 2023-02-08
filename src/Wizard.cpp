#include "Wizard.h"



Wizard::~Wizard()
{

}

void Wizard::Attack()
{
    std::cout<<"A wizard attacks \n";
}
Wizard::Wizard(std::string name)
:Player(name)
{
    
}
