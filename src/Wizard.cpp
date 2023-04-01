#include "Wizard.h"

Wizard::Wizard(std::string name)
:Player(name)
{
    //std::cout<<"wizard created\n";
}

Wizard::~Wizard()
{
//std::cout<<"wizard deletetd\n";
}

void Wizard::Attack()
{
    setHealth(50);
    setDamage(44);
    this->player_type=Player_type::wizard;
    std::cout<<"A wizard attacks \n";
}

