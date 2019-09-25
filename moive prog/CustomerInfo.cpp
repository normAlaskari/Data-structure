#include "CustomerInfo.h"

CustomerInfo::CustomerInfo()
{

}
void CustomerInfo::setData(string n, string p)
{
    name =n;
    phone =p;
}
string CustomerInfo::getName()
{
    return name;
}
string CustomerInfo::getPhone()
{
    return phone;
}
