

#include "misc.h"



int main(int argc, char const *argv[])
{
 aboutTheGame();
 
 if (IntroScene())
 { 
    //   music.openFromFile("Main_Menu.wav");
    //   music.play();
    //   music.setLoop(true);
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


    if(!theBattle(player,enemy))
    {
    std::cout<<"GAME OVER!!!\n";
    }
    else
    {
    crossRoads2();
    ItemPtr weapon2 = nullptr;
    srand(time(nullptr));
        if (chestOpen2())
        {   
        weapon2=player->createChestItems();     
        }
        std::shared_ptr<Enemy> enemy=createEnemy();
        std::cout<<"player count: "<<player->getPlayerCount()<<std::endl;
        std::cout<<"enemy count: "<<enemy->getEnemyCount()<<std::endl;
        std::cout<<"weapon count: "<<weapon->getItemCount()<<std::endl;
        if(!theBattle2(player,enemy))
        {
    std::cout<<"GAME OVER!!!\n";
        }

    }


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
