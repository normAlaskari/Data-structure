#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <list>
#include "List.h"

using namespace std;

class Player
{
    public:

        void setName(string n);
        string getName();
        void setHealth(int h);
        int getHealth();
        void setItem();
        Player(string n, int health);

private:
        string name;
        int health;
};

#endif // PLAYER_H
