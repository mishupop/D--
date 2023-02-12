#ifndef ENEMY_H
#define ENEMY_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

enum class Enemy_type
{
    Orc=1,
    Troll,
    Warlock
};

class Enemy
{
public:
    Enemy();
    ~Enemy();
std::vector <Item*> Inventory;

virtual void enemy_attack();


private:
int m_hp;
int m_damage;

};

#endif