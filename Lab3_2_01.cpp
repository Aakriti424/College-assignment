/*1. Constructor and Destructor (Basic Implementation)
Write a C++ program to create a class Person with:
 Data members: name and age.
 A constructor to initialize these values.
 A destructor to display a message when an object is destroyed.
Demonstrate object creation and automatic destructor call at the end of the program.*/
#include<iostream>
using namespace std;


class Person{
    string name;
    int age;
    public:
        Person(string n, int a)
        {
            name=n;
            age=a;
        }
        ~Person()
        {
            cout<<"Deconstructor called";
        }
};

int main()
{
    Person  p("Aakriti",20);
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}