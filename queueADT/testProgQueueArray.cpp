//Test Program Queue as Array

#include <iostream>
#include "queueAsArray.h"

using namespace std;

int main()
{
   queueType <int> Type;
  int myint;

  std::cout << "Please enter some integers (enter 0 to end):\n";

  do {
    std::cin >> myint;
    Type.addQueue(myint);
  } while (myint);

  std::cout << "myqueue contains: ";
  while (!Type.isEmptyQueue())
  {
    std::cout << ' ' << Type.front();
    Type.deleteQueue();
  }
  std::cout << '\n';

  return 0;


}

