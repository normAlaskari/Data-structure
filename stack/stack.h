
#ifndef STACKTYPE_H
#define STACKTYPE_H
#include <assert.h>
#include <iostream>
#include <stack>

using namespace std;

template <class Type>
class stackType
{

private:
    int maxStackSize;
    int stackTop;
    Type *list;

public:
    void initializeStack();
    bool isFullStack() const;
    bool isEmptyStack() const;
    void push(const Type&);
    void pop();
    Type top() const;
    stackType(int = 20);
    ~stackType();
    bool operator==(const stackType&);
};

template <class Type>
void stackType<Type>::initializeStack()
{
    stackTop = 0;
}


template<class Type>
bool stackType<Type>::isFullStack() const
{
    return (stackTop == maxStackSize);
} // end function isFullStack

// check for stack empty
template <class Type>
bool stackType<Type>::isEmptyStack() const
{
    return (stackTop == 0);
}
// insert an element into stack

template <class Type>
void stackType<Type>::push(const Type& newItem)
{
    if (!isFullStack())
    {
        list[stackTop] = newItem;
        stackTop++;
    }
    else
        cout << "\n\tCan not add to a full stack";
}

// delete an element from the stack
template <class Type>
void stackType<Type>::pop()
{
    if (!isEmptyStack())
        stackTop--;
    else
        cout << "\n\tCan not remove from an empty stack";
}
// return the value of stack-top
template <class Type>
Type stackType<Type>::top() const
{
    // this->assert(stackTop != 0);
    return list[stackTop - 1];
}

// constructor for the class stackType
template <class Type>
stackType<Type>::stackType(int stackSize)
{
    if (stackSize <= 0)
    {
        cout << "Invalid size";
        stackSize = 10;
    }
    else
        maxStackSize = stackSize;

    stackTop = 0;
    list = new Type[maxStackSize];
}

// destructor for the class stackType
template <class Type>
stackType<Type>::~stackType()
{
    delete[] list;
}

// overload the equality operator
template <class Type>
bool stackType<Type>::operator==
(const stackType& right)
{
    // check for same number of elements
    if (this->stackTop != right.stackTop)
        return false;
    //check for equality of elements at corresponding positions
    for (int i = 0; list[i] != right.list[i];)
        return 0;
    return 1;
}
#endif
