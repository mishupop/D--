

#include "misc.h"
#include "Item.h"
#include "Rogue.h"
#include "Warrior.h"
#include "Wizard.h"
#include "Orc.h"
#include "Troll.h"
#include "Warlock.h"


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
        std::cout<<"But what do you find inside? \n";
    }
    else
    {
        std::cout<<"You continue on your journey. \n";
    }


 delete player;
 }
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
