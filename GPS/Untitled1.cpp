#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string test[21];string test2[21];
    ifstream data,data2;
    data.open("data.txt");
    data2.open("data.txt");

    for (int i = 0; i<11; i++)
    {data >> test[i] ;

        data2 >> test2[i];
    }


    for (int i = 0; i<21; i++)
    cout << test[i] << endl;

return 0;
}
