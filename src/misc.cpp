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






/*
Player* SetupPlayer()

{
   
}
*/