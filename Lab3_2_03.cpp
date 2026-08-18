/*3. Parameterized Constructor
Write a C++ program to create a class Circle with:
 Data member: radius.
 A parameterized constructor to initialize the radius.
 A function to calculate and display the area.
Demonstrate object creation by passing values at the time of object declaration.*/


#include<iostream>
using namespace std;

class Circle{
    float radius;
    public:
    Circle(float r)
    {
        radius=r;
    }

    void area()
    {
        float a;
        a=3.14*radius*radius;
        cout<<"Radius of the circle is:\t"<<a;
    }
};

int main()
{
    Circle c(2.7f);
    c.area();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (3)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}