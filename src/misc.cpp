#include "misc.h"




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

    std::cout << "Press any key to continue...";
    std::cout.flush(); 
    getchar(); 
    std::cout << "\033[2J\033[1;1H";

    return start;

}

bool restartGame()
{
    char decide;
    bool restart=false;
  
    std::cout<<"Do you want to restart the game? type (y/n): ";
    std::cin>>decide;

    if(decide == 'y')
    restart=true;
    else if (decide == 'n')
    restart=false;

    std::cout << "Press any key to continue...";
    std::cout.flush(); 
    getchar(); 
    std::cout << "\033[2J\033[1;1H";

    return restart;

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
    std::cout << "Press any key to continue...";
    std::cout.flush();
    getchar(); 
    std::cout << "\033[2J\033[1;1H";
    //insert clear screen+press any key to continue

    std::cout<<"Hello "<< player_typename<<"-"<<player_name<<std::endl;

   std::cout << "Press any key to continue...";
    std::cout.flush();
    getchar(); 
    std::cout << "\033[2J\033[1;1H";
return player;  

}

std::string roadChosen;//global string to be used in other functions
enum RoadTo //global enum to be used in other functions
{Village=1,
Forest,
Cave
};
RoadTo roadTo=Village;
void crossRoads()
{
    int chooseRoad;
    chooseRoadText();
    
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
        break;
        default:
        std::cout<<"You must type 1, 2, or 3 \n";
        break;
    
    }
    
    std::cout<<"You chose the "<<roadChosen<<std::endl;
    std::cout << "Press any key to continue...";
    std::cout.flush();
    getchar(); 
    std::cout << "\033[2J\033[1;1H";
}

std::string roadChosen2;//global string to be used in other functions
enum RoadTo2 //global string to be used in other functions
{Bog=1,
Plains,
Mountain
};
RoadTo2 roadTo2=Bog;
void crossRoads2()
{
    int chooseRoad;
    
    chooseRoad2Text();
    std::cin>>chooseRoad;

    switch (chooseRoad)
    {
        case 1:
        roadChosen2="bog";
        roadTo2=RoadTo2::Bog;
        
        break;
        case 2:
        roadChosen2="plains";
        roadTo2=RoadTo2::Plains;
        break;
        case 3:
        roadChosen2="mountain";
        roadTo2=RoadTo2::Mountain;
        break;
        default:
        std::cout<<"You must type 1, 2, or 3 \n";
        break;
    
    }
    
    std::cout<<"You chose the "<<roadChosen2<<std::endl;
    std::cout << "Press any key to continue...";
    // std::cout.flush();
    // getchar(); 
    // std::cout << "\033[2J\033[1;1H";
}

bool chestOpen()
{
    bool openChest=false;
    char doYouOpen;
    chestOpenText(roadChosen);
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
     std::cout << "Press any key to continue...";
    // std::cout.flush();
    // getchar(); 
    // std::cout << "\033[2J\033[1;1H";//-clear screen--de facut cu system+contoare la obiectele create


return openChest;
}
bool chestOpen2()
{
    bool openChest=false;
    char doYouOpen;
    chestOpenText(roadChosen2);
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
     std::cout << "Press any key to continue...";
    // std::cout.flush();
    // getchar(); 
    // std::cout << "\033[2J\033[1;1H";//-clear screen--de facut cu system+contoare la obiectele create


return openChest;
}


std::shared_ptr<Enemy> createEnemy()
{
    std::shared_ptr<Enemy> enemy;
    
    Enemy_type enemy_type = static_cast<Enemy_type>(rand() % 3);

    switch (enemy_type)
    {
        case Enemy_type::Troll:
            enemy = std::make_shared<Troll>();
            std::cout << "Troll created" << std::endl;
            break;
        case Enemy_type::Orc:
            enemy = std::make_shared<Orc>();
            std::cout << "Orc created" << std::endl;
            break;
        case Enemy_type::Warlock:
            enemy = std::make_shared<Warlock>();
            std::cout << "Warlock created" << std::endl;
            break;
        default:
            std::cout<<"Error when creating enemy\n";
            break;
    }

    return enemy;
}


bool theBattle(std::shared_ptr<Player> player,std::shared_ptr<Enemy> enemy)
{
    int player_health=0;
    int enemy_health=0;
    bool you_win=false;
    switch (roadTo)
    {
        case Village:

        {
            std::cout<<"enemy attacks first\n";
           
            do 
            {
            player_health=player->totalHealth()-enemy->getDamage();
            enemy_health=enemy->getHP() - player -> totalAttackPower();
            }
            while (player_health >= 0 && enemy_health >= 0);
            you_win=(enemy_health<=0)? true:false;
                
            break;
        }
        case Forest:
        {
            std::cout<<"player attacks first\n";
            do 
            {
            enemy_health=enemy->getHP() - player -> totalAttackPower();
            player_health=player->totalHealth()-enemy->getDamage();            
            }
            while (player_health >= 0 && enemy_health >= 0);
            you_win=(enemy_health<=0)? true:false;
                
            break;
        }
        case Cave:
        {
            int randomAttack=std::rand()%2;
            switch (randomAttack)
            {
                case 0:
                {
                    std::cout<<"player attacks first\n";
                    do 
                    {
                    enemy_health=enemy->getHP() - player -> totalAttackPower();
                    player_health=player->totalHealth()-enemy->getDamage();            
                    }
                    while (player_health >= 0 && enemy_health >= 0);
                    you_win=(enemy_health<=0)? true:false;
                    
                    break;
                }
                case 1:
                {
                    std::cout<<"enemy attacks first\n";
                    do 
                    {
                    player_health=player->totalHealth()-enemy->getDamage();
                    enemy_health=enemy->getHP() - player -> totalAttackPower();
                    }
                    while (player_health >= 0 && enemy_health >= 0);
                    you_win=(enemy_health<=0)? true:false;
                    
                    break;
                }
            }

        break;
        }

    }
    std::cout<<player_health<<" : "<<enemy_health<< std::endl;
    if (you_win==true)
    std::cout<<"You won!!!\n";
    else
    std::cout<<"The enemy won!!!\n";
    enemy.reset();
    return you_win;
}

bool theBattle2(std::shared_ptr<Player> player,std::shared_ptr<Enemy> enemy)
{
    int player_health=0;
    int enemy_health=0;
    bool you_win=false;
    switch (roadTo2)
    {
        case Bog:

        {
            std::cout<<"enemy attacks first\n";
           
            do 
            {
            player_health=player->totalHealth()-enemy->getDamage();
            enemy_health=enemy->getHP() - player -> totalAttackPower();
            }
            while (player_health >= 0 && enemy_health >= 0);
            you_win=(enemy_health<=0)? true:false;
                
            break;
        }
        case Mountain:
        {
            std::cout<<"player attacks first\n";
            do 
            {
            enemy_health=enemy->getHP() - player -> totalAttackPower();
            player_health=player->totalHealth()-enemy->getDamage();            
            }
            while (player_health >= 0 && enemy_health >= 0);
            you_win=(enemy_health<=0)? true:false;
                
            break;
        }
        case Plains:
        {
            int randomAttack=std::rand()%2;
            switch (randomAttack)
            {
                case 0:
                {
                    std::cout<<"player attacks first\n";
                    do 
                    {
                    enemy_health=enemy->getHP() - player -> totalAttackPower();
                    player_health=player->totalHealth()-enemy->getDamage();            
                    }
                    while (player_health >= 0 && enemy_health >= 0);
                    you_win=(enemy_health<=0)? true:false;
                    
                    break;
                }
                case 1:
                {
                    std::cout<<"enemy attacks first\n";
                    do 
                    {
                    player_health=player->totalHealth()-enemy->getDamage();
                    enemy_health=enemy->getHP() - player -> totalAttackPower();
                    }
                    while (player_health >= 0 && enemy_health >= 0);
                    you_win=(enemy_health<=0)? true:false;
                    
                    break;
                }
            }

        break;
        }

    }
    std::cout<<player_health<<" : "<<enemy_health<< std::endl;
    if (you_win==true)
    std::cout<<"You won!!!\n";
    else
    std::cout<<"The enemy won!!!\n";
    enemy.reset();
    return you_win;
}






// wav-urilr tre sa fie in build...daca is in src tre schimbat path-ul