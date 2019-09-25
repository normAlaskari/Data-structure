#include "MovieInfo.h"
#include <iostream>
#include <stddef.h>

using namespace std;

MovieInfo::MovieInfo()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}
void MovieInfo::AddNode(string a,string b,string c,string d,string e,int f)
{
   nodePtr n = new node;
   n->next= NULL;
   n-> title = a;
   n->star= b;
    n->producer = c;
    n->director= d;
    n->production= e;
    n->copies= f;

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
void MovieInfo::DeleteNode(string a)
{
   nodePtr delPtr = NULL ;
   temp=head;
   curr=head;
   while(curr != NULL && curr->title !=a)
   {
     temp=curr;
     curr=curr->next;
   }
   if(curr==NULL)
   {
       cout << a << " was not in the list\n";
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
   cout << a << endl;
   }
}
void MovieInfo::printList()
{

    curr=head;
    while(curr!=NULL)
    {
        cout << " Movie Title : " << curr->title << endl;
        cout << " Movie Star : " << curr->star << endl;
        cout << " Movie producer : " << curr->producer << endl;
        cout << " Movie director : " << curr->director << endl;
        cout << " Movie production : " << curr->production << endl;
        cout << " Movie Copies : " << curr->copies << endl;


        curr=curr->next;

    }
    cout << "\n\n";
}
bool MovieInfo::searchElem( string searchTitle)
{
    nodePtr p;
    nodePtr save;
    bool found = false;
    p = head;
    while (p != NULL)
    {
        if(p->title == searchTitle)
        {
            return true;
            break;
        }
        else{
            p =p->next;
        }
    }

    cout <<"Not Found" << endl;
    return false;


}

void MovieInfo::addCopy()
{
    nodePtr n = new node;
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

void MovieInfo::delCopy(int  Copy)
{
   nodePtr delPtr = NULL ;
   temp=head;
   curr=head;
   while(curr != NULL && curr->copies !=Copy)
   {
     temp=curr;
     curr=curr->next;
   }
   if(curr==NULL)
   {
       cout << Copy << " was not in the list\n";
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
   cout << Copy<< endl;
   }
}
