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







Player* setupPlayer()

{
   std::string player_name, player_type;
   int choose;
    std::cout<<"Type your player name: \n";    
    std::cin>>player_name;
    

    std::cout<<"Choose player type: \n";
    std::cout<<"Warrior = 1 \n";
    std::cout<<"Wizard = 2 \n";
    std::cout<<"Rogue = 3 \n";

    
    std::cin>>choose;
    switch (choose)
    {
    case 1:
    player_type="Warrior";
    break;
    case 2:
     player_type="Wizard";
    break;
    case 3:
     player_type="Rogue";
    
    default:
    std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen
    //insert clear screen+press any key to continue

    std::cout<<"Hello "<< player_type<<"-"<<player_name<<std::endl;

    std::cout<<"press any key to continue\n";
    std::cin.get();
    std::cout << "\033[2J\033[1;1H";//-clear screen

    Player* the_player;

    if(player_type == "Wizard")
    {
        Player* player = new Wizard(player_name);
        //return player;
        the_player=player;
    }
    else if(player_type == "Warrior")
    {
        Player* player = new Warrior(player_name);
        //return player;
        the_player=player;
    }
    else if (player_type=="Rogue")
    {
        Player* player = new Rogue(player_name);
        //return player;
        the_player=player;
    }
   return the_player;
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













// wav-urilr tre sa fie in build...daca is in src tre schimbat path-ul