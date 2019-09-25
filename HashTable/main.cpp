#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;
#include "hash.h"
int main()
{

   hash test;
   string name = "";


   test.AddItem("Norman", "redRed2");
   test.AddItem("rafy", "CoD");
   test.AddItem("chavs", "LoL");
   test.AddItem("Charls", "forthnigth");
   test.AddItem("Henry", "Bf4");
   test.AddItem("Alex", "AnyGame");
   test.AddItem("Morty", "CSC GO");

   while (name != "exit")
   {
       cout << " enter to Search for Person fav game or type exit to exit\n "<<endl;
       cout <<  "Search for: ";
       cin >> name;
       if(name != "exit")
       {
           test.Search(name);
       }
   }

   /*test.PrintT();
  test.PritItemInIndex();*/







    return 0;
}
