#include "misc.h"



void aboutGame()
{
  
    
       std::cout<<"Text despre joc \n"; 
       //insert clear screen+press any key to continue
       std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
}



bool IntroScene()
{
    char decide;
    bool start=false;
  
    std::cout<<"Do you want to start playing the game? type (y/n): ";
    std::cin>>decide;

    if(decide == 'y')
    start=true;
    else if (decide == 'n')
    start=false;

    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen

    return start;


}







std::shared_ptr<Player> setupPlayer()

{
   std::string player_name, player_typename;
   int choose;
    std::cout<<"Type your player name: \n";    
    std::cin>>player_name;
    

    std::cout<<"Choose player type: \n";
    std::cout<<"Warrior = 1 \n";
    std::cout<<"Wizard = 2 \n";
    std::cout<<"Rogue = 3 \n";

    
    std::cin>>choose;
    std::shared_ptr<Player> player=nullptr;
    switch (choose)
    {
    case 1:
        player_typename="Warrior";
        player =  std::make_shared<Warrior>(player_name);;
        player->player_type = Player_type::warior; 
       
        break;
    case 2:
        player_typename="Wizard";
        player = std::make_shared<Wizard>(player_name);
        player->player_type = Player_type::wizard;        
        break;
    case 3:
        player_typename="Rogue";
        player = std::make_shared<Rogue>(player_name);
        player->player_type = Player_type::rogue;        
        break;
    default:
    std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
    //insert clear screen+press any key to continue

    std::cout<<"Hello "<< player_typename<<"-"<<player_name<<std::endl;

    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
return player;  

}

std::string roadChosen;
enum RoadTo
{Village=1,
Forest,
Cave
};
RoadTo roadTo=Village;
void crossRoads()
{
    int chooseRoad;
    
    std::cout<<"You're walking on a road and arrive at a crossroad \n";
    std::cout<<"with three paths ahead. one leads to a village, another \n";
    std::cout<<"to a forest and the third to a cave. \n";
    std::cout<<" Which path will you choose? \n";
    std::cout<<"Village -1, forest -2, cave -3 \n";
    std::cin>>chooseRoad;

    switch (chooseRoad)
    {
        case 1:
        roadChosen="village";
        roadTo=RoadTo::Village;
        
        break;
        case 2:
        roadChosen="forest";
        roadTo=RoadTo::Forest;
        break;
        case 3:
        roadChosen="cave";
        roadTo=RoadTo::Cave;
        
        default:
        std::cout<<"You must type 1, 2, or 3 \n";
        break;
    
    }
    
    std::cout<<"You chose the "<<roadChosen<<std::endl;
    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
    
}

bool chestOpen()
{
    bool openChest=false;
    char doYouOpen;
    std::cout<<"As you walk on the path to the "<<roadChosen<<" you come across a chest \n";
    std::cout<<"on the side of the road. \n";
    std::cout<<"Do you want to open it? (y/n): ";
    std::cin>>doYouOpen;

    if(doYouOpen == 'y')
    {
        openChest=true;
    std::cout<<"You opened the chest!!!\n";
    std::cout<<"But what do you find inside it? \n";
    }
    else if (doYouOpen == 'n')
    {
    openChest=false;
    std::cout<<"You continue on your journey. \n";
    }
    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen


return openChest;
}


std::shared_ptr<Enemy> createEnemy()
{
    std::shared_ptr<Enemy> enemy;
    srand(time(0));
    Enemy_type enemy_type = static_cast<Enemy_type>(rand() % 3);

    if (enemy_type == Enemy_type::Troll)
    {
        enemy = std::make_shared<Troll>();
        std::cout << "Troll created" << std::endl;
    }
    else if (enemy_type == Enemy_type::Orc)
    {
        enemy = std::make_shared<Orc>();
        std::cout << "Orc created" << std::endl;
    }
    else if (enemy_type == Enemy_type::Warlock)
    {
        enemy = std::make_shared<Warlock>();
        std::cout << "Warlock created" << std::endl;
    }

    return enemy;
}

void theBattle()
{
    switch (roadTo)
    {
        case Village:
        {
            std::cout<<"enemy attacks first\n";
        }
        case Forest:
        {
            std::cout<<"player attacks first\n";
        }
        case Cave:
        {
            int randomAttack=std::rand()%2;
            switch (randomAttack)
            {
                case 0:
                {
                    std::cout<<"player attacks first\n";
                }
                case 1:
                {
                    std::cout<<"enemy attacks first\n";
                }
            }


        }

    }
}







// wav-urilr tre sa fie in build...daca is in src tre schimbat path-ul