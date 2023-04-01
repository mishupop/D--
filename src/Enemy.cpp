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

void Enemy::enemy_attack()
{
    std::cout<<"An enemy attacks!!!\n";
}