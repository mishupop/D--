#ifndef WIZARD_H
#define WIZARD_H

#pragma once
#include "Player.h"


class Wizard:public Player
{
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
