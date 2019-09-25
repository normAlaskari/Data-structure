#ifndef LIST_H
#define LIST_H
#include <string>

using namespace std;

class List
{
    public:

        List();
        void AddNode(string a, double b );
        void DeleteNode(string delA, double delB);
        void printList();
    private:
        typedef struct node
        {
            string a;
            double b;
            node* next;
        }* nodePtr;

        nodePtr head=0;
        nodePtr curr=0;
        nodePtr temp=0;
};

#endif // LIST_H
