#include "Warlock.h"

Warlock::Warlock()
{
    setHp(60);
    setDamage(44);
    this->enemy_type=Enemy_type::Warlock;
//std::cout<<"Enemy warlock created"<<std::endl;
}

Warlock::~Warlock()
{
//std::cout<<"Enemy warlock deleted"<<std::endl;
}

void Warlock::enemy_attack()
{
    std::cout<<"A warlock attacks!!!\n";
}