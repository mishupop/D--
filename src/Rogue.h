#ifndef ROGUE_H
#define ROGUE_H

#pragma once
#include "Player.h"

class Rogue:public Player
{
public:
    Rogue()
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