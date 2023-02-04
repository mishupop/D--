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



void choosePlayerType()
{
     Player You;
   std::string name;
   int choose;
    std::cout<<"Insert your player name: \n";    

    You.getPlayerName(name);

    std::cout<<"Choose player type: \n";
    std::cout<<"Warrior = 1 \n";
    std::cout<<"Wizard = 2 \n";
    std::cout<<"Rogue = 3 \n";


    
    std::cin>>choose;
    switch (choose)
    {
    case 1:
    std::cout<<"You are a warrior \n";
    break;
    case 2:
    std::cout<<"You are a wizard \n";
    break;
    case 3:
    std::cout<<"You are a rogue \n";
    
    default:
    std::cout<<"You must type 1, 2, or 3 \n";
        break;
    }
}


/*
Player* SetupPlayer()

{
   
}
*/