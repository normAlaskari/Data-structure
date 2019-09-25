#include <iostream>
#include <windows.h>
#include "linkedlist.h"
#include <string>
#include <ctime>
#include "arrayListType.h"
using namespace std;

void timer(int sec)
{
    Sleep(sec*1000);
}


int main()
{
    linkedlist Lists;
    arrayListType<string> stacks;
    ifstream Welcm("welcome.txt");
    ifstream choices("choices.txt");
    string welFLine;
    string welSLine;
    string welTLine;
    string choicesS;
    int choicesN;
    int UserCho;

 while(Welcm && getline(Welcm,welFLine) && getline(Welcm, welSLine) && getline(Welcm,welTLine))
 {   stacks.insert(welFLine);
     stacks.insert(welSLine);
     stacks.insert(welTLine);
 }

  stacks.print();

 while(choices >> choicesN && getline(choices,choicesS) )
 {
     Lists.AddNode(choicesN,choicesS);
 }

Lists.PrintList();
cout << endl;
cout << endl;

do
{
    cout << "your choses is: ";
      cin>>UserCho;
    if (UserCho==1)
    {

    }

    if (UserCho==2)
    {

    }

    if (UserCho==3)
    {

    }

    if (UserCho==4)
    {

    }
      cout <<endl;

    if (UserCho > 1 && UserCho >5)
    {
       cout <<"sorry invalid input!!the program is shutting down";
       timer(2);
      cout <<endl;
    }

}while(UserCho >0 && UserCho <6);


    return 0;
}




