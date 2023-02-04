#ifndef ROGUE_H
#define ROGUE_H

#pragma once
#include "Player.h"
#include "Item.h"
#include "misc.h"
class Rogue:public Player
{
public:
    Rogue(std::string name,int damage,int health)
    {

    };
    ~Rogue();

    void Attack();

private:
std::string m_name;
int m_damage;
int m_health;
};

#endif