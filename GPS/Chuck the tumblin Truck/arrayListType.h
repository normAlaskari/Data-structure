#ifndef ARRAYLISTTYPE_H
#define ARRAYLISTTYPE_H
#include <iostream>
#include <assert.h>
using namespace std;

template <class elemType>
class arrayListType
{
   public:
  //overload assignment operator
    const arrayListType<elemType>& operator=
      (const arrayListType<elemType>&);
      //determines if list is empty
    bool isEmpty() const;
      //determines if list is full
    bool isFull() const;
    //determines list size
    int listSize() const;
    //determines the size of list
    int maxListSize() const;
    //prints elements in list
    void print() const;
    //function to determine if the item is the same
    bool isItemAtEqual(int location, const elemType& item) const;
    //insert an item in the list at the position specified
    void insertAt(int location, const elemType& insertItem);
    //inserts item at end of list
    void insertEnd(const elemType& insertItem);
    //removes item from list at specified point
    void removeAt(int location);
    //function to retrive the element from the pos specified
    void retrieveAt(int location, elemType& retItem) const;
    //function to replace at specific location
    void replaceAt(int location, const elemType& repItem);
    //removes all elements from list
    void clearList();
    //function to search the list for a given item
    int seqSearch(const elemType& item) const;
    //insert item specified by parameter
    void insert(const elemType& insertItem);
    //function to remove from list at given parameter
    void remove(const elemType& removeItem);
    //constructor
    arrayListType(int size = 100);
    //copy constructor
    arrayListType(const arrayListType<elemType>& otherList);
    //destructor
    ~arrayListType();
    int max();

  protected:
    elemType *list; //array to hold the list of elements
    int length;   //store the length of list
    int maxSize;
};
template<class elemType> //template statement
bool arrayListType<elemType>::isEmpty()const
{
  return (length == 0); //returns bool value of true if length == 0 or                     //false if list is not empty
}
//Time-Complexity = 0(1)
template<class elemType>
  bool arrayListType<elemType>::isFull() const
{
  return (length == maxSize); //returns true if list is full returns                            //false if list is not full
}

template<class elemType>
int arrayListType<elemType>::listSize() const
{
  return length;//returns length of list
}

template<class elemType>
int arrayListType<elemType>::maxListSize() const
{
  return maxSize; //returns max size of list
}
//Time-Complexity 0(n)
template<class elemType>
void arrayListType<elemType>::print() const
{
  for( int i = 0; i <length; i++)
    cout <<list[i]<< endl;// prints every element of list
    cout << endl;
}
//Time-Complexity 0(1)
template <class elemType>

bool arrayListType<elemType>::isItemAtEqual
  (int location, const elemType& item) const
  {
    return(list[location] == item); //determines if item at int location is equal and returns true if so
  }
 //Time-Complexity 0(n)
template <class elemType>
void arrayListType<elemType>::insertAt
  (int location, const elemType& insertItem)
{
  if (location < 0 || location >= maxSize)//cannot insert a item at a invalid location
    cerr <<"The position of the item to be inserted "
    <<"is out of range"<< endl;

  else
    if(length >= maxSize)
      cerr << "Cannot insert in a full list"<< endl;
      else
      {
        for(int i = length; i> location; i-- )
          list[i] = list[i-1];
          list[location] = insertItem;
          length++;
      }
}
//Time-Complexity 0(1)
template <class elemType>
void arrayListType<elemType>::insertEnd(const elemType& insertItem)
{
  if(length >= maxSize)
    cerr <<"Cannot insert a full list"<<endl;
    else
    {
      list[length] = insertItem;
      length++;
    }
}
//Time-Complexity 0(n)
template <class elemType>
void arrayListType<elemType>::removeAt(int location)
{
  if(location < 0 || location >= length)
    cerr<< "The location of the item to be removed "
    <<"is out of range"<< endl;
  else
  {
    for(int i = location; i < length-1; i++)
    list[i] = list[i+1];

    length--;
  }
}
//Time-Complexity 0(n)
template <class elemType>
void arrayListType<elemType>::replaceAt
  (int location, const elemType& repItem)
{
  if (location < 0 || location >= length)
  cerr << "The location of the item to be replaced is "
  <<"out of range."<<endl;
  else
  list[location] = repItem;
}
//Time-Complexity 0(1)
template<class elemType>
void arrayListType<elemType>::clearList()
{
  length = 0;
}
//0(1)
template<class elemType>
arrayListType<elemType>::arrayListType(int size)
{
  if (size < 0)
  {
  cerr<<"The array size must be positive. Creating an array of size 100"<<endl;
  maxSize = 100;
  }

else
  maxSize = size;
  length = 0;
  list = new elemType[maxSize];
  assert(list != NULL);
  }

  template<class elemType>
    arrayListType<elemType>::~arrayListType()
    {
      delete [] list;
    }

  template<class elemType>
    arrayListType<elemType>::arrayListType
      (const arrayListType<elemType>& otherList)
    {
      maxSize = otherList.maxSize;
      length = otherList.length;
      list = new elemType[maxSize];
      assert(list != NULL);

      for(int j = 0; j < length; j++)
        list [j] = otherList.list[j];
    }

    //Time-Complexity 0(n)
    template<class elemType>
      const arrayListType<elemType>& arrayListType<elemType>::operator=
      (const arrayListType<elemType>& otherList)
      {
        if (this!= &otherList)
        {
          delete [] list;
          maxSize = otherList.maxSize;
          length = otherList.length;

          list = new elemType[maxSize];
          assert(list != NULL);
          for(int i=0; i<length; i++)
            list[i] = otherList.list[i];
        }
        return *this;
      }
   //Time-Complexity 0(n)
  template <class elemType>
  int arrayListType<elemType>::seqSearch(const elemType& item)const
  {
    int loc;
    bool found = false;

    for(loc = 0; loc < length; loc++)
      if(list[loc]== item)
      {
        found = true;
        break;
      }
      if (found)
        return loc;
      else
        return -1;
  }

  template <class elemType>
  void arrayListType<elemType>::insert(const elemType& insertItem)
  {
    int loc;

    if(length ==0)
    list[length++] = insertItem;

    else if (length == maxSize)
      cerr <<"Cannot insert in a full list."<<endl;
    else
    {
      loc = seqSearch(insertItem);

      if (loc == -1)
        list[length++] = insertItem;

    }
  }
  //Time-Complexity 0(n)
  template<class elemType>
  void arrayListType<elemType>::remove(const elemType& removeItem)
  {
    int loc;

    if (length == 0)
      cerr << "Cannot delete form empty list"<< endl;
    else
    {
      loc = seqSearch(removeItem);

      if(loc != -1)
        removeAt(loc);
      else
        cout <<"The item to be deleted is not in the list"<<endl;
    }
  }

template<class elemType>
  int arrayListType<elemType>::max()
  {
    int max= list[0];

  for(int i = 0; i <length ; i++)
  {
    if(max < list[i])
    max= list[i];
  }
  return max;
  }
#endif // ARRAYLISTTYPE_H
