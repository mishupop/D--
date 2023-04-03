#include "Wizard.h"

Wizard::Wizard(std::string name)
:Player(name)
{
    setHealth(50);
    setDamage(44);
    this->player_type=Player_type::wizard;
}

Wizard::~Wizard()
{
//std::cout<<"wizard deletetd\n";
}

void Wizard::Attack()
{
    
    std::cout<<"The wizard attacks \n";
}

