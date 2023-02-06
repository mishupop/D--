#include "Item.h"

Item::Item()
{

}

Item::~Item()
{

}



int Item::getattackPower()
{
    return m_attackPower;
}

int Item::getdefence()
{
    return m_defence;
}

std::string Item::getitemType()
{
   return m_itemType; 
}
