#ifndef HASH_H
#define HASH_H
#include <iostream>
#include<cstdlib>
#include<string>

using namespace std;

class hash
{
    public:
        hash();
        int Hash(string key);
        void AddItem(string name, string game);
        int NumOfItmInIndex(int index);
        void PrintT();
        void PritItemInIndex(int index);
        void Search(string name);


    private:
        static const int TableS= 40 ;

        struct item {
        string name;
        string game;
        item* next;
        };

      item* HashTable[TableS];

};

#endif // HASH_H
