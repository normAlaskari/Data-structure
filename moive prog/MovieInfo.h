#ifndef MOVIEINFO_H
#define MOVIEINFO_H
#include <string>

using namespace std;

class MovieInfo
{
private:
        typedef struct node
        {
            string title;
            string star;
            string producer;
            string director;
            string production;
            int copies;
            node* next;
        }* nodePtr;

        nodePtr head=0;
        nodePtr curr=0;
        nodePtr temp=0;
public:


        MovieInfo();
        void AddNode(string title,string star,string producer,string director,string production,int copies);
        void DeleteNode(string title);
        void printList();
        bool searchElem(string item);
        void addCopy();
        void delCopy(int  Copy);

};

#endif // MOVIEINFO_H
