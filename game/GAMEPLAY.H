#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "Player.h"
#include "List.h"
#include <list>

using namespace std;


class GamePlay :public Player
{
    public:
        GamePlay(string n, int h);
        int getRand();
        void lhealth();
        void ghealth();
        void mag();
        bool intro();


    private:
        int magic;

;
};

#endif // GAMEPLAY_H
