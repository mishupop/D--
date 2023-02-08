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
    Rogue (std::string name);
    ~Rogue();

    void Attack();

private:

};

#endif
