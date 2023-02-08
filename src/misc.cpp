#include "misc.h"



void aboutGame()
{
  
    
       std::cout<<"Text despre joc \n";  
    
}



bool IntroScene(bool start)
{
    char decide;
    
  
    std::cout<<"Do you want to start playing the game? type (y/n): ";
    std::cin>>decide;

    if(decide = 'y')
    start=true;
    else if (decide = 'n')
    start=false;

    

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
    if(player_type == "Wizard")
    {
        Player* player = new Wizard(player_name);
        return player;
    }
    else if(player_type == "Warrior")
    {
        Player* player = new Warrior(player_name);
        return player;
    }
    else 
    {
        Player* player = new Rogue(player_name);
        return player;
    }
}



// wav-urilr tre sa fie in build...daca is in src tre schimbat path-ul