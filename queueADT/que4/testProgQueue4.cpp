//Test Program Queue as Array

#include<iostream>
using namespace std;
const int maxqueue= 4;
class Queue
 {
public:
   Queue();
   ~Queue();
   bool isEmpty() const;
   bool isFull() const;
   int retrieve();
   void append(const int &x);
   int serve();
   int getSize();
   void print();
   void frontzero()
   {
   rear =  - 1;
   front = 0;
   count=0;
   }
private:
   int front, rear,count,plus;
   int entry[maxqueue];
};

Queue::Queue()
{

   rear =  - 1;
   front = 0;
   plus=0;
   count=0;
}
Queue::~Queue()
{ rear =  - 1;
   front = 0;
   plus=0;
   count=0;
}
int  Queue::getSize() { return count;  }
bool Queue::isEmpty() const { return ((rear ==-1) && (count==0)|| (front >= rear) && (count==0));}
bool Queue::isFull() const { return (rear == maxqueue - 1);}
int Queue::retrieve()
{
    int x;
    if(!isEmpty())
    {
        x = entry[plus++];
        return x;
    }
}
void Queue::append(const int &x)
{
    if(!isFull())
    {
        entry[++rear] = x;
        count++;
    }
}
int Queue::serve()
{
    int x;
    if(!isEmpty())
    {
        count--;
        return x = entry[front++];

    }
}
void Queue::print()
{
    if(!isEmpty())
    {
        for(int i = front; i <= rear; i++)
            cout<<entry[i]<<"  ";
        cout<<endl;
    }
}
void moveNthFront(Queue &q,int n)
{
    Queue copyq;
    while(!q.isEmpty())
    {
        if(q.retrieve()!=n)
    copyq.append(q.serve());
        else
            n=q.serve();
    }
    q.frontzero();
    q.append(n);
        while(!copyq.isEmpty())
        {
        q.append(copyq.serve());
        }
        q.print();
}
int main()
{
    Queue q1;
    int x,i,n;
    cout<<"Enter 4 value to add: ";
    for(i=0;i<4;i++)
    {
            cin>>x;
            q1.append(x);

    }
    q1.print();
    cout<<"Enter the number you want to put in the front"<<endl;
    cin>>n;
    moveNthFront(q1,n);

}


