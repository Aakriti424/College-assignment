/*5. The Default Copy Constructor
Write a C++ program to create a class Car with:
 Data members: company and price.
 Use the compiler-provided default copy constructor to copy 
object data.
 Display the copied object details.
Explain how the default copy constructor works automatically
 in this scenario.*/

#include<iostream>
using namespace std;

class Car{
    public:
        string company;
        float price;
};

int main()
{
    Car c1;
    c1.company="Aakriti";
    c1.price=2.7;
    Car c2(c1);
    cout<<"Company:\t"<<c2.company<<"\nPrice:\t"<<c2.price;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (5)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}