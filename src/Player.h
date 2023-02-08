#ifndef PLAYER_H
#define PLAYER_H

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"
#include "misc.h"


enum class player_type{
warior=1,
wizard,
rogue};

class Player
{
public:
   Player();
    Player(std::string name);
    
   virtual ~Player();

//std::vector <Item*> Inventory;

void getPlayerName(std::string name);





virtual void Attack();


void CheckInventory();

protected:
std::string m_player_name;

private:

int m_health;
int m_damage;

//setat de derivate

};

#endif