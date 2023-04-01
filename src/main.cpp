

#include "misc.h"



int main(int argc, char const *argv[])
{
    sf::Music menu, exploring, battle; 
   menu.openFromFile("Main_Menu.wav");
    menu.play();
       menu.setLoop(true); 
 aboutTheGame();
 
 if (IntroScene())
 { 
    
    menu.pause();
    exploring.openFromFile("Exploring.wav");
    exploring.play();
    exploring.setLoop(true);
    std::shared_ptr<Player> player=setupPlayer();
 

    crossRoads();
    ItemPtr weapon = nullptr;
    srand(time(nullptr));
        if (chestOpen())
        {   
        weapon=player->createChestItems();     
        }
    
    exploring.pause();
    battle.openFromFile("BattleFinal.wav");
    battle.play();
    battle.setLoop(true);
    std::shared_ptr<Enemy> enemy=createEnemy();
        // std::cout<<"player count: "<<player->getPlayerCount()<<std::endl;
        // std::cout<<"enemy count: "<<enemy->getEnemyCount()<<std::endl;
        // std::cout<<"weapon count: "<<weapon->getItemCount()<<std::endl;


    if(!theBattle(player,enemy))
    {
    std::cout<<"GAME OVER!!!\n";
    }
    else
    {
    battle.stop(); 
    exploring.play();   
    crossRoads2();
    ItemPtr weapon = nullptr;
    srand(time(nullptr));
        if (chestOpen2())
        {   
        weapon=player->createChestItems();     
        }
        battle.play(); 
        std::shared_ptr<Enemy> enemy=createEnemy();
       
        if(!theBattle2(player,enemy))
        {
    std::cout<<"GAME OVER!!!\n";
        }

    }

battle.stop();
if (weapon != nullptr)
        {
        player->clearInventory();
        }
  
 }
 
 
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
