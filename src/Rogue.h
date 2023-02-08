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
    Rogue (std::string name);
    ~Rogue();

    void Attack();

private:

};

#endif
