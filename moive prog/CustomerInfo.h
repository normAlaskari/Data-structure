#ifndef CUSTOMERINFO_H
#define CUSTOMERINFO_H

#include <string>

using namespace std;

class CustomerInfo
{
private:
    string name;
    string phone;

   public:
    CustomerInfo();
    void setData(string, string);
    string getName();
    string getPhone();
};
#endif // CUSTOMERINFO_H
