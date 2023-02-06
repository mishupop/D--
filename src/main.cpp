
#include "Player.h"
#include "misc.h"
#include "Item.h"
#include "Rogue.h"
#include "Warrior.h"
#include "Wizard.h"


int main(int argc, char const *argv[])
{
   Player You;
aboutGame();

You.choosePlayerType();
You.Attack();







    return 0;
}
