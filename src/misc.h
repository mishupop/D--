#ifndef MISC_H
#define MISC_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Warrior.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Orc.h"
#include "Troll.h"
#include "Warlock.h"



bool IntroScene();

void aboutGame();

Player* setupPlayer();

void crossRoads();

bool chestOpen();

Enemy* createEnemy();



#endif