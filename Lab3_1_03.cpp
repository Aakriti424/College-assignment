/*3. Memory Allocation for Objects
Write a C++ program to dynamically create an object of a 
class Circle using pointers and the new
keyword.
 Accept radius as input.
 Calculate and display the area.*/


#include<iostream>
using namespace std;

class Circle{
    public:
        float a;
        Circle(float radius)
        {
            a=3.14*radius*radius;
        }

        void display()
        {
            cout<<"Area of the circle is:\t"<<a;
        }
};


int main()
{
    float r;
    cout<<"Enter the radius of the circle:\n";
    cin>>r;
    Circle *ptr=new Circle(r);
    ptr->display();
    delete ptr;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (3)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}