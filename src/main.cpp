

#include "misc.h"



int main(int argc, char const *argv[])
{
 aboutGame();
 
 if (IntroScene())
 {
 std::shared_ptr<Player> player=setupPlayer();
 

crossRoads();
ItemPtr weapon = nullptr;
    if (chestOpen())
    {     
     weapon=player->createChestItems();
    }
    
srand(time(nullptr));
    std::shared_ptr<Enemy> enemy=createEnemy();

theBattle();
 if (weapon != nullptr)
        {
    player->CheckInventory();
    player->clearInventory();
        }
 

 
  
 }
 
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
