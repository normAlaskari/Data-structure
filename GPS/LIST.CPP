#include "List.h"
#include <stddef.h>
#include <iostream>
#include <fstream>


using namespace std;

//CONSTRUCTOR TO INNITIALIZE LINKED LIST TO NULL
List::List()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}
//ADDING ITEMS TO LINKED LIST
void List::AddNode(int c, int a,int b, string r) //GETTING INPUT FROM A FILE ABOUT ROAD DATA
{
   nodePtr n = new node; //CREATING NEW NODE
   n->next= NULL;       //ASSIGNING NEXT POINTER TO NULL
   //ASSIGNING ALL THE DATA TO SPECIFIC LINKED LIST MEMBERS
   n->key = c;
   n->minute = a;
   n->miles = b;
   n->route =r;
    //pUSHING POINTER N TO THE LINKED LIST
   if(head!= NULL){
    curr = head;
    while(curr->next!=NULL)
        {
        curr=curr->next;
        }
        curr->next= n;
    }else
    {
        head =n;
    }
}
//DELETE FUNCTION
/*void List::DeleteNode(string a, double b)
{
   nodePtr delPtr = NULL ;
   temp=head;
   curr=head;
   while(curr != NULL && curr->b !=b)
   {
     temp=curr;
     curr=curr->next;
   }
   if(curr==NULL)
   {
       cout << a << " " << b << " was not in the list\n";
    delete delPtr;
   }else{
   delPtr = curr;
   curr=curr->next;
   temp->next= curr;
   if(delPtr==head)
   {
       head=head->next;
       temp=NULL;
   }
   delete delPtr;
   cout << a << " " << b << endl;
   }
    curr=head;
    while(curr!=NULL)
    {
        cout <<"Item : "<< curr->a << "Price : " << curr->b<< endl;
        curr=curr->next;

    }
    cout << "\n\n";
}*/

//PRINTS WHOLE LIST
void List::printList()
{
    curr=head;
    while(curr!=NULL) //WHILE CURRENT IS NOT NULL PRINT WHOLE LIST
    {
        cout << "Possibilities " << curr->key << " Minutes : "<< curr->minute << " Miles : " << curr->miles<<" route : " << curr->route << endl;
        curr=curr->next; // GRAB NEXT NODE IN LINKED LIST

    }
    cout << "\n\n";
}
//TO DISPLAY SEARCH RESULT INTO PRINTRESULT FUNCTION
//TAKES KEY AS INPUT AAND OUTPUTS THE POINTER TO A NODE OF LINKED LIST
List::nodePtr List::searchList(int i)
{
nodePtr sPtr = NULL ; //INITIALIZE THE SPTR TO NULL
   temp=head;
   curr=head;
   //WHILE CURR IS NOT NULL WHICH MEANS WHILE NOT THE LAST ELEMENT
   // AND WHILE KEY IS NOT FOUND KEEP ITERATING THROUGH THE LINKED LIST
   while(curr != NULL && curr->key !=i)
   {
     temp=curr;
     curr=curr->next;
   }
   if(curr==NULL)
   {
       cout << i << " was not in the list\n";
    delete sPtr;
   }
   return curr;
}
//TO DISPLAY THE RESULT OF QUERY.
void List::printResult(int startPoint, int endpoint)
{
   if((startPoint > 0 && startPoint<8) && (endpoint>0 &&endpoint<8)) //CHECKS THE BOUNDS OF STARTING AND ENDING POINTS
 {
   for(int i = 0; i < 21;i++) //ITERATES THROUGH ALL THE POSSIBILITIES AND GIVES A A SCENARIO NUMBER
  {
      //IF STATEMENT TO DECIDE WHICH GIVEN STARTING AND ENDING POINTS MATCHES IN DATABASE
      if ((startPoint ==p[i].a && endpoint==p[i].b)|| (startPoint ==p[i].b && endpoint==p[i].a))
    {
        //PRINTS DATA ONTO SCREEN BY SEARCHING THROUGH THE LINKED LIST FOR MATCHING SEQUENCE. GETTING SCENARIO NUMBER FROM FOR LOOP AND THEN SEARCH THAT IN KEYS.
        cout << " You'll reach your destination through" << searchList(i+1)->route << " in " << searchList(i+1)->minute<< " minute. \n Your destination is " << searchList(i+1)->miles << " miles away." << endl;
    }
  }
  //IF USER ENTERS THE SAME PLACE OF STARTING AND ENDING POINTS, IT WILL DISPLAY THIS....
  if(startPoint == endpoint)
   {
       cout << "You're Already here" << endl;
   }
 }
 //IF THERE IS NOTHING IN DATABASE THAT MATCHES PREVIOUS CONDITIONS
 //PROGRAM WILL PRINT THIS.
   else {
    cout << "Not A Valid Input" << endl;



   }
}
