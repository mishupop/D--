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
    Warrior(std::string name);
    ~Warrior();

void Attack();
private:

};

#endif
