#include "linkedlist.h"
linkedlist::linkedlist()
{   head = NULL;
    curr = NULL;
    temp = NULL;}

void linkedlist::AddNode(int AddChoise,string addData){
    nodePtr n = new node;
    n->next = NULL;
    n->Data =addData;
    n->choices =AddChoise;

    if(head != NULL)
    {   curr = head;
        while(curr->next != NULL)
        {curr = curr ->next;
        }curr -> next =n;}
    else {head = n;}
}
void linkedlist::DeletNode(string delData){
    nodePtr delPtr = NULL;
    temp = head;
    curr = head;
    while(curr != NULL && curr->Data != delData && curr->choices){
        temp = curr;
        curr = curr->next;
    }
    if (curr == NULL)
    {
        cout << delData << " was not in the list\n";
        delete delPtr;
    }

    else {
        delPtr = curr;
        curr = curr->next;
        temp->next =curr;
        if(delPtr == head)
        {
            head = head ->next;
            temp = NULL;
        }
        delete delPtr;

    }
}

void linkedlist::PrintList(){
    curr = head;
    while(curr != NULL)
    {
        cout <<endl;
        cout<< curr-> choices << "-" << curr->Data;
        curr = curr->next;
    }
}
