#include "texts.h"

 void Clear() 
 {
 #if defined _WIN32
     system("cls");
    //clrscr(); // including header file : conio.h
 #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
     system("clear");
 #elif defined (__APPLE__)
     system("clear");
 #endif
 }
 
void aboutTheGame()
{
    std::cout<<"Text despre joc \n"; 
       //insert clear screen+press any key to continue
    std::cout << "Press any key to continue...";
    std::cout.flush();
    getchar(); 
    std::cout << "\033[2J\033[1;1H";
}

void warriorText()
{
    std::cout<<"Text about warriors\n";
}

void wizardText()
{
    std::cout<<"Text about wizards\n";
}

void rogueText()
{
    std::cout<<"Text about rogues\n";
}

void chooseRoadText()
{
    std::cout<<"You're walking on a road and arrive at a crossroad \n";
    std::cout<<"with three paths ahead. one leads to a village, another \n";
    std::cout<<"to a forest and the third to a cave. \n";
    std::cout<<" Which path will you choose? \n";
    std::cout<<"Village -1, forest -2, cave -3 \n"; 
}

void chooseRoad2Text()
{
    std::cout<<"You're walking on a road and arrive at a crossroad \n";
    std::cout<<"with three paths ahead. one leads to a bog, another \n";
    std::cout<<"to the plains and the third to a mountain. \n";
    std::cout<<" Which path will you choose? \n";
    std::cout<<"Bog -1, Plains -2, Mountain -3 \n"; 
}

void aboutRoadChosenText()
{
    std::cout<<"Text about where the road leads to \n";
}

void chestOpenText(std::string roadTo)
{
    std::cout<<"As you walk on the path to the "<<roadTo<<" you come across a chest \n";
    std::cout<<"on the side of the road. \n";
    std::cout<<"Do you want to open it? (y/n): ";
}

void weaponsText()
{
    std::cout<<"Text about weapons\n";
}

void enemyText()
{
   std::cout<<"Text about enemies\n"; 
}

void battleText()
{
    std::cout<<"Text about the battle\n";
}

void afterBattleText()
{
    std::cout<<"Text after battle\n";
}
