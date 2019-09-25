#include <iostream>
#include <windows.h>
#include "linkedlist.h"
#include <string>
#include <ctime>
#include "arrayListType.h"
#include "Queue.h"
#include "uername.h"
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
void timer(int sec)
{
     for(int i =5; i > 0 ; i--)
      {   Sleep(sec*100);
          cout << i;
          Beep(523,500);

          SetConsoleTextAttribute(console, 12);
          cout << endl;
          cout<< "are you ready!!!" << endl;
          Sleep(600);
          system("CLS");}
}

void music()
{
    Beep(480,200);
    Beep(1568,200);
    Beep(1568,200);
    Beep(1568,200);
    Beep(739.99,200);
    Beep(783.99,200);
    Beep(783.99,200);
    Beep(783.99,200);
    Beep(369.99,200);
    Beep(392,200);
    Beep(369.99,200);
    Beep(392,200);
    Beep(392,400);
    Beep(196,400);}
int main()
{
    linkedlist Lists;
    Queue Qs;
    arrayListType<string> stacks;
    ifstream Welcm("welcome.txt");
    ifstream choices("choices.txt");
    ifstream DoNothg("Do nothing.txt");
    ifstream pushMe("push me.txt");
    ifstream pushMyHead("push my head ligths.txt");
    ifstream pushMyTrunk("push my trunk.txt");
    ifstream ticklMe("tickle my tummy.txt");
    ifstream dance("Dance.txt");
    ifstream rand1("rand1.txt");
    ifstream rand2("rand2.txt");
    ifstream rand3("rand3.txt");
    ifstream rand4("rand4.txt");
    string temp[3];
    int traval =2;
    string choicesS;
    int choicesN;
    int UserCho;


 while(Welcm && getline(Welcm,temp[0]) && getline(Welcm, temp[1]) && getline(Welcm,temp[2]))
 {   stacks.insert(temp[0]);
     stacks.insert(temp[1]);
     stacks.insert(temp[2]);
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
{   cout<< endl;
     cout << "your choice is: ";
      cin>>UserCho;
      cout<< endl;
    if (UserCho==1)
    {
      while (pushMe && getline(pushMe,temp[0]) && getline(pushMe,temp[1]) )
      {
          Qs.Enqueue(temp[0]);
          Qs.Enqueue(temp[1]);
      }
      Qs.Print();
      traval = traval+traval;
      cout<< "you traveled: "<< traval << " miles";
      cout <<endl;
      timer(5);
      cout <<endl;
     getline(rand1 ,temp[2]);
      cout <<endl;
      cout<<temp[2];
      traval = traval*2;
      cout <<endl;
      cout<< "Because of my turbo speed  now I traveled: "<< traval << " miles";
      cout <<endl;
      cout<< "what would you like to choses again? click no to exit "<<endl;
     }

      Qs.Dequeue();
    if (UserCho==2)
    {
       while (pushMyTrunk && getline(pushMyTrunk,temp[0]) )
      {
          Qs.Enqueue(temp[0]);
      }
      Sleep(500);
      Qs.Print();
      timer(5);
      cout <<endl;
     getline(rand2 ,temp[2]);
      cout <<endl;
      cout<<temp[2];
      cout <<endl;
      cout<< "what would you like to choses again click no to exit?"<<endl;
     }

    if (UserCho==3)
    {
       while (pushMyHead && getline(pushMyHead,temp[0]) )
      {
          Qs.Enqueue(temp[0]);
      }
      Sleep(500);
      Qs.Print();
      timer(5);
      cout <<endl;
     getline(rand3 ,temp[2]);
      cout <<endl;
      cout<<temp[2];
      cout <<endl;
      cout<< "what would you like to choses again ? click no to exit "<<endl;

     }


    if (UserCho==4)
    {
        while (ticklMe && getline(ticklMe,temp[0]) )
      {
          Qs.Enqueue(temp[0]);
      }
      Sleep(500);
      Qs.Print();
      timer(5);
      cout <<endl;
     getline(rand4 ,temp[0]);
      cout <<endl;
      cout<<temp[0];
      cout <<endl;
      cout<< "what would you like to choses again ? click no to exit "<<endl;

     }


      if (UserCho==5)
      {
           while (DoNothg && getline(DoNothg,temp[0]) )
      {
          Qs.Enqueue(temp[0]);
      }
      Sleep(500);
      Qs.Print();

      cout <<endl;
      timer(5);
      cout <<endl;
     getline(dance ,temp[0]);
     music();
      cout <<endl;
      cout<<temp[0];
      cout <<endl;
      cout<< "what would you like to choses again ? click no to exit "<<endl;
      }


    if (UserCho > 1 && UserCho >5)
    {
       cout <<"sorry invalid input!!the program is shutting down ";
       Sleep(500);
      cout <<endl;
    }
Lists.PrintList();

}while(UserCho >0 && UserCho <6);
system("CLS");

    return 0;
}




