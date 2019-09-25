#include <iostream>
#include "Player.h"
#include "GamePlay.h"
#include <cstdlib>
#include <ctime>
#include <string>
#include <iomanip>
#include "List.h"

using namespace std;

struct iType
{
    string name;
    int price;
};

int main()
{
        unsigned seed = time(0);
        srand(seed);

        iType item[3]={{"Robe",300},{"Pen",200},{"Scribe",100}};
        GamePlay Players[2] ={{"Friar",300},{"Warrior",2000}};

        List Friar;
        List Warrior;
        for(int i = 0; i<3; i++)
        Friar.AddNode(item[i].name,item[i].price);

        Friar.printList();
        Warrior.printList();
        int select;
        cout << "Purchase Things from Friar in exchange with your HPs\n";
        cout << "Select\n 1 for Robe, 2 for Pen, 3 for Scribe\n\n ";
        cin >> select;
        switch(select)
        {
        case 1:Warrior.AddNode(item[0].name,item[0].price);
            Friar.DeleteNode(item[0].name,item[0].price);
            Warrior.printList();
            Friar.printList();
            break;

        case 2:Warrior.AddNode(item[1].name,item[1].price);
            Friar.DeleteNode(item[1].name,item[1].price);
            Warrior.printList();
            Friar.printList();
            break;

        case 3:Warrior.AddNode(item[2].name,item[2].price);
            Friar.DeleteNode(item[2].name,item[2].price);
             Warrior.printList();
            Friar.printList();
            break;

            default: cout <<"Not a valid selection";
        }

}
