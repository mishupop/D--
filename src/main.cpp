

#include "misc.h"
//#include "Item.h"
//#include "Rogue.h"
//#include "Warrior.h"
//#include "Wizard.h"
//#include "Orc.h"
//#include "Troll.h"
//#include "Warlock.h"


int main(int argc, char const *argv[])
{
 aboutGame();
 
 if (IntroScene())
 {
 Player* player=setupPlayer();

crossRoads();

    if (chestOpen())
    {
        std::cout<<"You opened the chest!!!\n";
        std::cout<<"But what do you find inside it? \n";
    player->createChestItems();
    }
    else
    {
        std::cout<<"You continue on your journey. \n";
    }

    Enemy* enemy=createEnemy();
player->CheckInventory();
player->clearInventory();
 delete player;
 delete enemy;
 //delete play;
 
 }
 
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
