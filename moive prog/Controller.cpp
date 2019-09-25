#include <iostream>
#include <string>
#include "MovieInfo.h"
#include "CustomerInfo.h"

using namespace std;

int main()
{
    MovieInfo moiveone;
    MovieInfo moiveTwo;
    MovieInfo moiveThree;
    CustomerInfo ctest[3];
    int MoiveChoice;
    string name, num;
    int choice;

    moiveone.AddNode("Fast and mad","Paul John","Vin Diesel","Walker","Rock", 10);
    moiveTwo.AddNode("the Grinch","Yarrow Cheney","Benedict Cumberbatch", "Rashida Jones","Pharrell",6);
    moiveThree.AddNode("Venom","Ruben Fleischer","Tom Hardy","Michelle Williams","Riz Ahmed", 5);

    for(int i = 0; i<1;i++)
    {

        cout << "Enter the renter Name :" ; cin >> name;
        cout << "Enter the renter Number :" ; cin >> num;
    ctest[i].setData(name, num );
    }

    for(int i = 0; i<1;i++)
    {
    cout << ctest[i].getName() << " " << ctest[i].getPhone() << endl;
    }



    /*cout << moiveone.searchElem("Fast");
    cout <<endl;*/

    cout << "would you like yo return or rent a copy ? if return click one or two to rent one" <<endl;
    cin >> choice;
    cout <<endl;
    if(choice==1)
    {
        int cho;
        cout << " what moive you rented?"<<endl;
        cout << "1- Fast and mad\n";
        cout << "2- the Grinch\n";
        cout << "3- the Venom\n";
        cin >> cho;

         if(cho==1)
     {
         cout <<"you choses\n";
        moiveone.printList();
     }
      else if (cho ==2)
      {
        cout <<"you choses\n";
       moiveTwo.printList();
      }
     else if(cho ==3)
     {
         cout <<"you choses\n";
       moiveThree.printList();

     }else cout << "invalid input";
     cout<<endl;

        moiveone.addCopy();
        cout << "movie was successfully returned"<<endl;
    }
    else if (choice == 2)
    {
        cout << "Hello " << name << " please chose from the movie list below"<<endl;
     cout << "movie one"<<endl;
      moiveone.printList();
     cout << "movie two"<<endl;
      moiveTwo.printList();
      cout << "movie three"<<endl;
      moiveThree.printList();

      cin >> MoiveChoice;

      if(MoiveChoice==1)
     {
        moiveone.printList();
     }
      else if (MoiveChoice ==2)
      {
       moiveTwo.printList();
      }
     else if(MoiveChoice==3)
     {
       moiveThree.printList();

     }else cout << "invalid input";

           moiveone.delCopy(MoiveChoice);
        cout << MoiveChoice<< "was rented and add to  the customer data base";
    }
    else cout<< "invalid input";



    return 0;
}
