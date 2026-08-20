/*4. Friend Function
Write a C++ program to create two classes Rectangle and Square.
 Write a friend function that can access the private members of both classes and calculate the
total area.*/

#include<iostream>
using namespace std;
class Square;
class Rectangle{
    float length=2,breadth=2;
    public:
        friend void area(Rectangle &r, Square &s);
};


class Square{
    float side=2;
    public:
        friend void area(Rectangle &r, Square &s);
};

void area(Rectangle &r, Square &s)
{
    float tsa;
    tsa=r.length*r.breadth+s.side*s.side;
    cout<<"Total Area is:\t"<<tsa;
}


int main()
{
    Rectangle r;
    Square  s;
    area(r,s);
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.4 (4)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}