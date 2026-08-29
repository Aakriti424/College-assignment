/*This Pointer
Write a C++ program to create a class Product with:
 Data members: product ID and price.
 A member function to set data using the this pointer to differentiate between local and class data
members.
 A member function to display product details.*/

#include<iostream>
using namespace std;

class Product{
    int id;
    float price;
    public:
        void data()
        {
            int id=27;
            float price=2700;
            this->id=id;
            this->price=price;
        }

        void display()
        {
            cout<<"Id:\t"<<id<<"\nPrice:\t"<<price;
        }
};

int main()
{
    Product p;
    p.data();
    p.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.4 (7)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}