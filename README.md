# D--



RO: Proiect practic pentru cursul de programare in C++ din cadrul IT School.

Cerinte:

Creati o aplicatie joc de tip console RPG.
Un jucator poate sa isi seteze numele si clasa din care face parte
    Wizard, Warrior, Rogue
Jocul trebuie sa aibe urmatoarele scene:
O scena Intro - se prezinta lumea si se intreaba jucatorul daca vrea sa joace
O scena SetupPlayer - Se intreaba numele jucatorului si ce clasa vrea sa fie iar dupa selectie 
un mic mesaj despre alegerea facuta
O scena CrossRoads - I se prezinta jucatorului ca este la o intalnire de drumuri si poate alege
sa mearga pe una dintre cele 3 drumuri care duc catre o padure, un sat sau catre o pestera
O scena Cufar - Pe oricare drum ales jucatorului ii ies e in cale un cufar, daca alege sa deschida cufarul va trebui sa primeasca niste obiecte ce vor fi adaugate in inventar, aceste obiecte sa fie in functie de ce clasa este playerul.
O scena Battel - Pe drum ii iese un inamic random(poate fi orc, golbin sau troll) si trebuie sa lupte cu inamicul, in cazul in care castiga ajunge la destinatie, in caz contrar se va printa un 
mesaj de end game.
Codul trebuie scris in C++ si sa fie urcat in Github
Pentru fiecare dintre scene trebuie schimbata melodia din fundal(Main_Menu.wav,Exploring.wav,BattelFinal.wav)

EN:Practical project for the C++ programming course at IT School.

Requirements:

Create a console RPG game application.
A player can set their name and choose their class from the following options:
Wizard, Warrior, Rogue.
The game should have the following scenes:

    Intro scene - Introduces the world and asks the player if they want to play.
    SetupPlayer scene - Asks the player for their name and class, and after selection displays a brief message about the choice made.
    CrossRoads scene - Presents the player with a crossroads and allows them to choose one of three paths that lead to a forest, a village, or a cave.
    Chest scene - Regardless of the path chosen, the player comes across a chest. If they choose to open the chest, they will receive items that are specific to their chosen class, which will be added to their inventory.
    Battle scene - While on the path, a random enemy appears (could be an orc, goblin, or troll) and the player must fight the enemy. If the player wins, they reach their destination. If they lose, a message will be displayed indicating the end of the game.

The code must be written in C++ and uploaded to GitHub.
A different background music file (Main_Menu.wav, Exploring.wav, BattelFinal.wav) should be played for each scene.
