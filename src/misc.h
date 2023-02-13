#ifndef MISC_H
#define MISC_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
//#include "Player.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Rogue.h"



bool IntroScene();

void aboutGame();

Player* setupPlayer();

void crossRoads();

bool chestOpen();



#endif