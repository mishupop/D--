#ifndef ROGUE_H
#define ROGUE_H

#pragma once
#include "Player.h"

class Rogue:public Player
{//-aici e acolada subliniata cu "expected class-name..
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
