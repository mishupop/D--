#ifndef ENEMY_H
#define ENEMY_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"


enum class Enemy_type
{
    Orc,
    Troll,
    Warlock
};

class Enemy
{
public:
    Enemy();
    virtual ~Enemy();

Enemy_type enemy_type;
void setHp(int hp)
    {
        m_hp = hp;
    }
int getHP()
    {
        return m_hp;
    }
void setDamage(int damage)
    {
      m_damage = damage;
    }
int getDamage()
    {
        return m_damage;
    }



virtual void enemy_attack();


private:
int m_hp;
int m_damage;

};

#endif