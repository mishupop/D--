#include "Troll.h"

Troll::Troll()
{
    setHp(70);
    setDamage(68);
    this->enemy_type=Enemy_type::Troll;
//std::cout<<"Enemy troll created"<<std::endl;
}

Troll::~Troll()
{
//std::cout<<"Enemy troll deleted"<<std::endl;
}