#ifndef WARRIOR_H
#define WARRIOR_H

#pragma once
#include "Player.h"

class Warrior: public Player
{//-aici e acolada subliniata cu "expected class-name..
public:
    Warrior()
    {

    };
    Warrior(std::string name);
    ~Warrior();

void Attack();
private:

};

#endif
