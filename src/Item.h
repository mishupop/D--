#ifndef ITEM_H
#define ITEM_H

#pragma once
#include "Player.h"
class Item
{
public:
    Item();
    ~Item();

   

private:
 int m_attackPower;
    int m_magicPower;
    int m_defence;
    std::string m_itemType;
};

#endif