#include "texts.h"

 void Clear() // Cross-platform clear screen function 
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
    std::cout<<"Welcome to Adventures in Precambria. \n";
    std::cout<<"For millenia Precambria was a peacfull place, where many peoples from different cultures, \n";
    std::cout<<"lived free according to their own customs and traditions. The tribes in the bogs forrests and mountains, \n";
    std::cout<<"the horsemen of the steppes and the magic kingdoms of the valleys respected each other, \n";
    std::cout<<"regularly engaged in trade. The tribes provided wood for the steppe peoples and gems for the \n";
    std::cout<<"wizards, the horsemen traded in metals and furs while the kingdoms tools and grain \n";
    std::cout<<"All of this was soon to be threatened by an expanding empire from the west. \n";
    std::cout<<"Your adventure starts in the village of Orosiri where you hear that Zirconarr, \n";
    std::cout<<"the evil emperror of Paibia started to send his raiders in Precambria to prepare \n";
    std::cout<<"for an invasion. \n";
    std::cout<<"Your task is to defeat the raiders in order to allow the good people of Precambria \n";
    std::cout<<"to prepare resisting the upcoming invasion. \n";
    std::cout<<"You can choose between three types of players, each with his own strenght and weakness. \n";
    std::cout << "Press any key to continue...";
    std::cout.flush();
    getchar(); 
    std::cout << "\033[2J\033[1;1H";
}

void warriorText()
{
    
std::cout << "Warriors come from the vast steppes of Precambria, where they hone their skills in combat and survival. ";
std::cout << "They are known for their strength, ferocity, and courage in battle. Whether wielding a massive sword or ";
std::cout << "charging into the fray with nothing but their fists, warriors are a force to be reckoned with. With ";
std::cout << "their high health and damage output, they excel at dealing and absorbing damage, making them the ideal ";
std::cout << "choice for players who prefer a more direct approach to combat." << std::endl;

}


void wizardText()
{

std::cout << "Wizards are masters of the arcane arts, wielding powerful spells that can control the elements, ";
std::cout << "summon creatures, and even bend the fabric of reality itself. Hailing from the magic kingdoms of the ";
std::cout << "valleys, they have spent years studying the ancient tomes of magic and perfecting their craft. ";
std::cout << "With their high intelligence and mana reserves, wizards excel at dealing magical damage from a ";
std::cout << "distance, making them the ideal choice for players who prefer a more strategic approach to combat." << std::endl;

}

void rogueText()
{
    // Print the text for the rogue class using multiple std::cout statements
std::cout << "Rogues are stealthy and cunning, using their agility and quick thinking to outmaneuver their enemies. ";
std::cout << "Hailing from the forests and mountains of Precambria, they have spent years honing their skills in ";
std::cout << "survival, hunting, and thievery. With their high dexterity and critical hit rate, rogues excel at ";
std::cout << "dealing burst damage and evading attacks, making them the ideal choice for players who prefer a ";
std::cout << "more sneaky and opportunistic approach to combat." << std::endl;

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
    std::cout<<"Bog -1, Steppe -2, Mountain -3 \n"; 
}


    void aboutTheVillage()
{
    std::cout << "The road leads to the village of Kimmerig. \n";
    std::cout << "It's a small and peaceful village, surrounded by lush green fields and gentle hills. \n";
    std::cout << "The people here are simple and friendly, always ready to offer a helping hand. \n";
    std::cout << "You might be able to find some supplies and information here, but beware of any suspicious characters. \n";
}

void aboutTheForest()
{
    std::cout << "The road leads to a dark and ominous forest. \n";
    std::cout << "The trees here are tall and gnarled, their branches twisted and entangled. \n";
    std::cout << "The air is thick with the sounds of rustling leaves, creaking wood and distant growls. \n";
    std::cout << "You might find some useful herbs and treasures here, but beware of any dangerous beasts and traps. \n";
}

void aboutTheCave()
{
    std::cout << "The road leads to a rugged and mysterious cave. \n";
    std::cout << "The entrance is dark and damp, the walls lined with jagged rocks and glowing crystals. \n";
    std::cout << "The air is heavy with the scent of earth and minerals, and echoes of whispers and hisses. \n";
    std::cout << "You might discover some valuable artifacts and secrets here, but beware of any deadly traps and guardians. \n";
}


void aboutTheMountain()
{
    std::cout << "The road leads to a towering and rugged mountain. \n";
    std::cout << "The slopes are steep and treacherous, the peaks shrouded in mist and snow. \n";
    std::cout << "The air is crisp and thin, and the sounds are muted by the echoes of the wind. \n";
    std::cout << "You might find some rare minerals and treasures here, but beware of any avalanches and rockslides. \n";
}

void aboutTheSteppe()
{
    std::cout << "The road leads to a vast and open steppe. \n";
    std::cout << "The grass here is tall and golden, the horizon stretching endlessly before you. \n";
    std::cout << "The air is fresh and free, and the sounds are carried far and wide by the breeze. \n";
    std::cout << "You might encounter some herds of wild horses and nomads here, but beware of any sandstorms and bandits. \n";
}

void aboutTheBog()
{
    std::cout << "The road leads to a murky and treacherous bog. \n";
    std::cout << "The water here is dark and still, the ground soft and spongy. \n";
    std::cout << "The air is thick and heavy, and the sounds are muffled by the layers of mist and mud. \n";
    std::cout << "You might come across some rare herbs and creatures here, but beware of any quicksands and leeches. \n";
}


void chestOpenText(std::string roadTo)
{
    std::cout<<"As you walk on the path to the "<<roadTo<<" you come across a chest \n";
    std::cout<<"on the side of the road. \n";
    std::cout<<"Do you want to open it? (y/n): ";
}

void warriorWeaponsText()
{
    std::cout<<"Text about weapons\n";
}

void wizardWeaponsText()
{
    std::cout<<"Text about weapons\n";
}

void rogueWeaponsText()
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
