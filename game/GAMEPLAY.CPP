#include "GamePlay.h"
#include "Player.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


GamePlay::GamePlay(string n, int h): Player(n,h)
{
}

int GamePlay::getRand()
{
    return((rand() % (2 - 1+ 1)) + 1);
}
void GamePlay::lhealth()
{
    setHealth(getHealth()-50);
}
void GamePlay::ghealth()
{
   setHealth(getHealth()+50);
}
void GamePlay::mag()
{
   setHealth(getHealth()+150);
}

bool GamePlay::intro()
{
    int pass;
    cout << " Welcome!\n In this game you'll try to kill all the enemies before you got murdered.\n"
        << "Enter the Passcode 5647 to begin the game.";
        cin >> pass;
        if (pass ==5647)
        {
            cout << "Welcome to the game! Press F to fire\n";
            return true;
        }else{

        cout << "error please try again\n" << endl;

        } return false;

}
