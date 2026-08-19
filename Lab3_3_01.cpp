/*1. Objects as Function Arguments (Pass by Value &amp; Reference)
Write a C++ program to create a class Distance with:
 Data members: feet and inches.
 Member functions to input distance and display distance.
 Pass an object to a function:
o Once by value.*/
#include<iostream>
using namespace std;
class Distance{
    int feet, inches;
    public:
    void input()
    {
        cout<<"Enter the distance in feet:\t"<<endl;
        cin>>feet;
        cout<<"Enter the distance in inches:\t"<<endl;
        cin>>inches;
    }

    void displaybyreference(Distance &obj)
    {
        cout<<"\n------PASS BY REFERENCE -------\n";
        cout<<"Distance in feet:\t"<<obj.feet<<"\nDistance in inches:\t"<<obj.inches<<endl;
    }

    void displaybyvalue(Distance obj)
    {
        cout<<"\n------PASS BY VALUE -------\n";
        cout<<"Distance in feet:\t"<<obj.feet<<"\nDistance in inches:\t"<<obj.inches<<endl;
    }
};

int main()
{
    Distance d;
    d.input();
    d.displaybyreference(d);
    d.displaybyvalue(d);
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.3 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}