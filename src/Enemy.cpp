#include "Enemy.h"

Enemy::Enemy()
{
//std::cout<<"enemy created"<<std::endl;
++count;
}

Enemy::~Enemy()
{
//std::cout<<"enemy deleted"<<std::endl;
}

//virtual  member function that displays who attacks/functie virtuala ce printeaza cine ataca
void Enemy::enemy_attack()
{
    std::cout<<"An enemy attacks!!!\n";
}