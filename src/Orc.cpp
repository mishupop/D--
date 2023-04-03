#include "Orc.h"

Orc::Orc()
{
    setHp(50);
    setDamage(34);
    this->enemy_type=Enemy_type::Orc;
//std::cout<<"Enemy orc created"<<std::endl;
}

Orc::~Orc()
{
//std::cout<<"Enemy orc deleted"<<std::endl;
}

void Orc::enemy_attack()
{
    std::cout<<"An orc attacks!!! \n";
}