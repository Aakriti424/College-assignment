/*2. Default Constructor
Write a C++ program to create a class Rectangle with:
 Data members: length and width.
 A default constructor that assigns both length and width to 1.
 A function to calculate and display the area.
Demonstrate object creation without passing parameters.*/


#include<iostream>
using namespace std;

class Rectangle{
    float length, width;
    public:
    Rectangle()
    {
        length=1;
        width=1;
    }
    void area()
    {
        float area;
        area=length*width;
        cout<<"Area of the rectangle is:\t"<<area;
    }
};


int main()
{
    Rectangle r;
    r.area();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (2)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}