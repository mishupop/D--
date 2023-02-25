

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
        std::cout<<"You opened the chest!!!\n";
        std::cout<<"But what do you find inside it? \n";

        std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
    
    weapon=player->createChestItems();
    }
    else
    {
        std::cout<<"You continue on your journey. \n";
    }
srand(time(nullptr));
    std::shared_ptr<Enemy> enemy=createEnemy();


 if (weapon != nullptr)
        {
    player->CheckInventory();
    //player->clearInventory();
        }
 

 
  
 }
 
else
std::cout<<"Ok... Your loss..see you next time!!!\n";






    return 0;
}
