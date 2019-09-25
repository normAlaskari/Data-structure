#include "List.h"
#include <stddef.h>
#include <iostream>

using namespace std;

List::List()
{
    head=NULL;
    curr=NULL;
    temp=NULL;
}
void List::AddNode(string a,double b)
{
   nodePtr n = new node;
   n->next= NULL;
   n->a = a;
   n->b = b;

   if(head!= NULL){
    curr = head;
    while(curr->next!=NULL){
        curr=curr->next;

        }
        curr->next= n;
    }else
    {
        head =n;
    }
}
void List::DeleteNode(string a, double b)
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
   cout << "The Value " << a << " " << b << " was deleted \n " ;
   }
}
void List::printList()
{
    curr=head;
    while(curr!=NULL)
    {
        cout << curr->a << curr->b<< endl;
        curr=curr->next;

    }
    cout << "done";
}

