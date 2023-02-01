#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

class Player
{
public:
    Player();
   virtual ~Player();

std::vector <Item*> Inventory;

virtual void Attack();


void CheckInventory();


private:
std::string m_PlayerName;
int m_health;
int m_damage;


};

#endif