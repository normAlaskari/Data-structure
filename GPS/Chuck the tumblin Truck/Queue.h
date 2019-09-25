#ifndef QUEUE_H
#define QUEUE_H


#include <string>
#include<iostream>
using namespace std;

#define MAX_SIZE 101 //maximum size of the array that will store Queue.


class Queue
{
private:
string A[MAX_SIZE];
int front, rear;
public:
Queue()
{
front = -1;
rear = -1;
}
// To check wheter Queue is empty or not
bool IsEmpty()
{
return (front == -1 && rear == -1);
}

// To check whether Queue is full or not
bool IsFull()
{
return (rear+1)%MAX_SIZE == front ? true : false;
}

void Enqueue(string x)
{

if(IsFull())
{
cout<<"Error: Queue is Full\n";
return;
}
if (IsEmpty())
{
front = rear = 0;
}
else
{
rear = (rear+1)%MAX_SIZE;
}
A[rear] = x;
}
// Removes an element in Queue from front end.
void Dequeue()
{

if(IsEmpty())
{
/*cout<<"Error: Queue is Empty\n";*/
return;
}
else if(front == rear )
{
rear = front = -1;
}
else
{
front = (front+1)%MAX_SIZE;
}
}
// Returns element at front of queue.
string Front()
{
if(front == -1)
{
cout<<"Error: cannot return front from empty queue\n";
return "ERROR";
}
return A[front];
}
void Print()
{
int count = (rear+MAX_SIZE-front)%MAX_SIZE + 1;
for(int i = 0; i <count; i++)
{
int index = (front+i) % MAX_SIZE; // Index of element while travesing circularly from front
cout<<A[index]<<" ";
}
cout<<"\n\n";
}
};
#endif // QUEUE_H
