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
    ~Wizard();

void Attack();

private:
std::string m_name;
int m_damage;
int m_health;
};

#endif