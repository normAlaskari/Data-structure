#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include<string>
#include<cstdlib>
#include <iostream>
#include<fstream>
using namespace std;

class linkedlist
{
    public:
        linkedlist();
        void AddNode( int AddChoise,string addData);
        void DeletNode(string delData);
        void PrintList();

    private:
       typedef struct node{
            string Data;
            int choices;
            node* next;
        }* nodePtr ;

        nodePtr head;
        nodePtr curr;
        nodePtr temp;
};

#endif // LINKEDLIST_H
