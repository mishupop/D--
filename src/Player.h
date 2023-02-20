#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
//#include "Misc.h" aici era problema


enum class Player_type{
warior,
wizard,
rogue};

class Player
{
public:
   Player();
    Player(std::string name);
    
   virtual ~Player();



Player_type player_type;


void setPlayerName(std::string name);


std::string getPlayerName()
{
   return m_player_name;
}

void setHealth(int health)
    {
        m_health = health;
    }
int getHealth()
    {
        return m_health;
    }
void setDamage(int damage)
    {
        m_damage = damage;
    }
int getDamage()
    {
        return m_damage;
    }

virtual void Attack();




void createChestItems();
void CheckInventory();
void clearInventory();

protected:
std::string m_player_name;
std::vector <Item*> Inventory;
private:

int m_health;
int m_damage;

//setat de derivate

};

#endif