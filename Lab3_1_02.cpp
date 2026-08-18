/*2. Class and Object | Accessing Members
Write a C++ program to create a class Rectangle
with: Private members: length and width.
Public member functions to input, calculate the
area, and display the area. Demonstrate object
creation and access to member functions using
the dot operator.*/

#include<iostream>
using namespace std;

class Rectangle{
    float length=27.7,width=21;
    public:
        float a;
        void area()
        {
            a=length*width;
        }

        void display()
        {
            cout<<"Area of rectangle is:\t"<<a;
        }
};


int main()
{
    Rectangle r;
    r.area();
    r.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (2)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}