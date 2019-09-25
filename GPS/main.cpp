#include <iostream>
#include "List.h"
#include <fstream>
#include <stdlib.h>

using namespace std;

//WORK BY RAFAY SHAIKH
/*
 THIS PROGRAM WILL DISPLAY DRIVE TIME AND MILES THROUGH A HIGHWAY FROM CITY A TO CITY B.
 USING FILES IT WILL GET GIVEN DATA LOADED IN A LINKED LIST WHICH THEN DO ITS OPERATIONS
 TO DECIDE THAT WHAT CITY IS OUR STARTING POINT AND WHICH ONE IS OUR ENDING POINT AND THEN
 IT WILL SEARCH AND MATCH THE POSSIBILE SCENARIO OF TIME, MILES, AND HIGHWAY FOR A SPECIFIC
 TRAVEL. IT CAN ALSO PRINT THE WHOLE DATA LINKED LIST.
*/

int main()
{

int minutes, miles, key ; //TEMP. HOLDS THE DATA COMING FROM FILE AND GOING TOWARDS LINKED LIST
string route;
  List GPS;
  //TO GET THE DATA FROM THE FILE
  fstream in("data.txt", ios::in);
    // WHILE FILE IS TRUE.
  while(in >> key >> minutes >>  miles && getline(in, route))
  {GPS.AddNode(key, minutes, miles, route);}       //ADDS DATA INN LINKED LIST UNTILE FINISH READING FROM FILE

    //JUST TO DISPLAY CITY NAMES TO USER. SELF-EXPLANOTORY

    string location[7]= {"Segovia","Mountain Home","Kerrville","Fredericksburg","Bandera","Comfort","Boerne"};
     int startingPoint, endingPoint;

     cout << "Please select the starting point from below\n";
     for (int i = 1; i< 8; i++)
        {cout<< i << " " << location[i-1] << endl;}
    cout << "Enter your selection (1-7): "; cin >> startingPoint;

    cout << "Please select the ending point from below\n";
    for (int i = 1; i< 8; i++)
        {cout<< i << " " << location[i-1] << endl;}
    cout << "Enter your selection (1-7): "; cin >> endingPoint;

    system("CLS");


    GPS.printResult(startingPoint, endingPoint); //CALLING THE FUNCTION INSIDE LINKED LIST CLASS
   // GPS.printList();


    return 0;

}

