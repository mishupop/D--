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
        
        break;
        case 2:
        roadChosen="forest";
        
        break;
        case 3:
        roadChosen="cave";
        
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
    openChest=true;
    else if (doYouOpen == 'n')
    openChest=false;

    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen


return openChest;
}

/*Enemy* createEnemy()
{
    Enemy* enemy=nullptr;
    srand(time(0));
    Enemy_type enemy_type=(Enemy_type)(rand()%3);

    if (enemy_type== Enemy_type::Troll)
    {
        enemy=new Troll();
      
        std::cout<<"Troll created"<<std::endl;
    }

    else if (enemy_type== Enemy_type::Orc)
    {
        enemy=new Orc();
       
        std::cout<<"Orc created"<<std::endl;
    }

    else if (enemy_type== Enemy_type::Warlock)
    {
        enemy=new Warlock();
       
        std::cout<<"Warlock created"<<std::endl;
    }
   
return enemy;
}*/


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








// wav-urilr tre sa fie in build...daca is in src tre schimbat path-ul