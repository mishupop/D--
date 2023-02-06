#ifndef ITEM_H
#define ITEM_H

#pragma once
#include "Player.h"
class Item
{
public:
    Item();
    ~Item();

   int getattackPower();

   int getdefence();

   std::string getitemType();

private:
 int m_attackPower;
    int m_magicPower;
    int m_defence;
    std::string m_itemType;
};

#endif