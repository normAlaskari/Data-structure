#ifndef LIST_H
#define LIST_H
#include <string>

using namespace std;
//Class for linked list
class List
{
    private:
        //LINKED LIST DATA STRUCTURE
        typedef struct node
        {
            int key;
            int minute;
            int miles;
            string route;
            node* next;
        }* nodePtr;

        nodePtr head=0;
        nodePtr curr=0;
        nodePtr temp=0;
    public:

        List();
        //STRUCT BASE ON OUR STARTING & ENDIN POINTS OUTCOMES. WE HAVE A TOTAL OF 49 POSSIBILITIES, BUT AFTER EXCLUDING
        //SAME OUTCOMES & OPPOSITE OUTCOMES, WE HAVE 21 POSSIBILITIES TO WORK WITH.
        struct possibilities
        {
            int a;
            int b;
        };
        possibilities p[21]={{2,1},{3,1},{4,1},{5,1},{6,1},{7,1},{3,2},{4,2},{5,2},{6,2},{7,2},{4,3},{5,3},{6,3},{7,3}
    ,{5,4},{6,4},{7,4},{6,5},{7,5},{7,6}};

        void AddNode(int c, int a, int b, string r);//TO INSERT A NODE INSIDE THE STRUCT
        void DeleteNode(string delA, double delB); //TO DELETE A NODE, BUT WE DON'T NEED THIS IN THIS PROGRAM. I GUESS?
        void printList();                          //TO PRINT WHOLE LINKED LIST ITEMS.
        void printResult(int e , int l);           //THE MAIN LOGIC PART OF OUR PROGRAM IT'LL PRINT THE FINAL RESULT.
        nodePtr searchList(int i);                 //SEARCHES THROUGH LINKED LIST FOR AN ITEM, THEN RETURNS A LINKED LIST POINTER.
};

#endif // LIST_H
