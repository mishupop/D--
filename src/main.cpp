

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
 delete player;
 }
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
