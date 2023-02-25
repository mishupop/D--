#ifndef ITEM_H
#define ITEM_H

#pragma once
#include <iostream>
#include <string>
#include <memory>
class Item
{
public:
    Item();
    Item(std::string itemType,std::string itemName,int attackPower, int magicPower,int defence);
   virtual ~Item();
void setattackPower(int attackPower)
{
    m_attackPower=attackPower;
}
int getattackPower()
{
return m_attackPower;
}
void setDefence(int defence)
{
    m_defence=defence;
}
int getdefence()
{
return m_defence;
}

void setItemType(std::string itemType)
{
    m_itemType=itemType;
}

std::string getItemType()
{
    return m_itemType;
}

void setItemName(std::string itemName)
{
m_itemName=itemName;
}
std::string getitemName()
{
    return m_itemName;
}

private:
 int m_attackPower;
    int m_magicPower;
    int m_defence;
    std::string m_itemType;
    std::string m_itemName;
};
using ItemPtr = std::shared_ptr<Item>;
#endif