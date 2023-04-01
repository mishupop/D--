#ifndef MISC_H
#define MISC_H
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <memory>
#include <SFML/Audio.hpp>
#include "texts.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Orc.h"
#include "Troll.h"
#include "Warlock.h"



bool IntroScene();



bool restartGame();

std::shared_ptr<Player> setupPlayer();

void crossRoads();
void crossRoads2();

bool chestOpen();

bool chestOpen2();

std::shared_ptr<Enemy> createEnemy();

bool theBattle(std::shared_ptr<Player> player,std::shared_ptr<Enemy> enemy);
bool theBattle2(std::shared_ptr<Player> player,std::shared_ptr<Enemy> enemy);

//sf::Music music;








#endif