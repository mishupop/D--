#include "Item.h"

Item::Item()
{

}

Item::Item(std::string itemType,std::string itemName,int attackPower,int magicPower,int defence)
{
m_itemType=itemType;
m_itemName=itemName;
m_attackPower=attackPower;
m_magicPower=magicPower;
m_defence=defence;
std::cout<<"Item created"<<std::endl;

}


Item::~Item()
{
std::cout<<"Item deleted"<<std::endl;
}




