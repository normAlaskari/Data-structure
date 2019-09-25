
#include <iostream>
#include <stack>

#include "stack.h"

using namespace std;

int main()
{

    stackType<int> binary;
    int num, total;


 cout << "Please enter a decimal: ";
    cin >> num;
    while(num > 0)
    {
        total = num % 2;
        num /= 2;
        binary.push(total);
    }
    while(!binary.isEmptyStack()) // Another loop to get the values from the stack / now in the correct order
    {
        cout << binary.top();
        binary.pop();

    }
    cout << endl;
    return 0;

}

