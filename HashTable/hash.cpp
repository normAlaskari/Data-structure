#include "hash.h"
#include <cstdlib>

hash::hash()
{
  for (int i =0; i < TableS; i++)
  {
      HashTable[i] =  new item;
      HashTable[i] -> name = "empty";
      HashTable[i] -> game ="empty";
      HashTable[i] -> next = NULL;
  }
}

void hash::AddItem(string name, string game)
{
    int index = Hash(name);

    if (HashTable[index]->name == "empty")
    {
          HashTable[index]->name = name;
          HashTable[index]->game = game;
    }
    else
    {
        item* Ptr = HashTable[index];
        item* n = new item;
        n -> name =name;
        n -> game =game;
        n -> next = NULL;
        while(Ptr->next != NULL)
        {
            Ptr = Ptr ->next;
        }
        Ptr->next =n;
    }
}

int hash::NumOfItmInIndex(int index)
{
    int count = 0;

    if (HashTable[index]->name=="empty")
    {
        return count;
    }
    else
    {
        count++;
        item* Ptr = HashTable[index];
        while(Ptr->next != NULL)
        {
            count++;
            Ptr = Ptr->next;
        }
    }

    return count;
}

void hash::PritItemInIndex(int index)
{
    item* Ptr =HashTable[index];

    if(Ptr ->name == "empty")
    {
        cout <<"index = " << index << " is empty";
    }
    else
    {
        cout << "index "<< index << " contains the following item\n";

        while (Ptr != NULL)
        {
            cout <<"------------\n";
            cout<< Ptr->name<<endl;
            cout<< Ptr->game<<endl;
            cout <<"------------\n";
            Ptr = Ptr -> next;


        }
    }
}

void hash::Search(string name)
{
    int index = Hash(name);
    bool foundName = false;
    string game;

    item* Ptr =HashTable[index];
    while (Ptr != NULL)
    {
        if (Ptr->name == name)
        {
            foundName =true;
            game = Ptr->game;
        }
        Ptr = Ptr ->next;
    }
    if (foundName == true)
    {
        cout << "Fav Game = " << game <<endl;
    }
    else
    {
        cout << name << "'s Info was not found in the table\n";
    }
}

void hash::PrintT()
{
    int number;
    for(int i =0; i <TableS; i++)
    {
        number = NumOfItmInIndex(i);
        cout <<"----------------\n";
        cout << "index = " << i <<endl;
        cout <<HashTable[i]->name <<endl;
        cout <<HashTable[i]->game<<endl;
        cout << " number of item = " << number <<endl;
        cout <<"----------------\n";

    }
}

int hash::Hash(string key)
{
 int hashT =0;
 int index;



for( int i = 0; i < key.length(); i++)
{
    hashT = (hashT + (int)key[i]) *10;

}

index  = hashT % TableS;

return index;


}
