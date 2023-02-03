#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "misc.h"

class Player
{
public:
    Player();

    Player(std::string name,int damage,int health);
    
   virtual ~Player();

std::vector <Item*> Inventory;

void getPlayerName(std::string name);


virtual void Attack();


void CheckInventory();


private:
std::string m_PlayerName;
int m_health;
int m_damage;


};

#endif