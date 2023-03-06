#ifndef MISC_H
#define MISC_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <memory>
#include "Warrior.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Orc.h"
#include "Troll.h"
#include "Warlock.h"



bool IntroScene();

void aboutGame();

bool restartGame();

std::shared_ptr<Player> setupPlayer();

void crossRoads();

bool chestOpen();

std::shared_ptr<Enemy> createEnemy();

bool theBattle(std::shared_ptr<Player> player,std::shared_ptr<Enemy> enemy);










#endif