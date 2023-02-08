#ifndef WIZARD_H
#define WIZARD_H

#pragma once
#include "Player.h"


class Wizard:public Player
{//-aici e acolada subliniata cu "expected class-name..
public:
    Wizard()
    {

    };
    Wizard(std::string name);

    ~Wizard();

void Attack();

private:

};

#endif
