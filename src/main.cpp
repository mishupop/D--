

#include "misc.h"



int main(int argc, char const *argv[])
{
 aboutGame();
 
 if (IntroScene())
 {
 std::shared_ptr<Player> player=setupPlayer();
 

crossRoads();
ItemPtr weapon = nullptr;
srand(time(nullptr));
    if (chestOpen())
    {   
     weapon=player->createChestItems();
     
    }
    

    std::shared_ptr<Enemy> enemy=createEnemy();
std::cout<<"player count: "<<player->getPlayerCount()<<std::endl;
std::cout<<"enemy count: "<<enemy->getEnemyCount()<<std::endl;
std::cout<<"weapon count: "<<weapon->getItemCount()<<std::endl;
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
