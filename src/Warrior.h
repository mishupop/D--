#ifndef WARRIOR_H
#define WARRIOR_H

#pragma once
#include "Player.h"

class Warrior: public Player
{
public:
    Warrior()
    {

    };
    ~Warrior();

void Attack();
private:
std::string m_name;
int m_damage;
int m_health;
};

#endif