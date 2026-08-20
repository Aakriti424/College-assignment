/*Friend Class
Write a C++ program to create two classes Box and Printer.
 Make Printer a friend class of Box.
 Allow the Printer class to access and display the private dimensions of the Box class.*/

#include<iostream>
using namespace std;

class Box{
    float length=2.7,width=2.7, height=2.7;
    public:
        friend class Printer;
};

class Printer{
    public:
        void display(Box &b)
        {
            cout<<"------ BOX DETAILS ------\n";
            cout<<"Lenght:\t"<<b.length<<"\nWidth:\t"<<b.width<<"\nHeight:\t"<<b.height;
        }
};

int  main()
{
    Printer p;
    Box b;
    p.display(b);
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.4 (5)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}