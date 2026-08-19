/*Returning Objects from Functions
Write a C++ program to create a class Complex to represent complex numbers.
 Include member functions to:
o Input complex numbers.
o Add two complex numbers using a member function that returns a Complex object.
o Display the result.*/

#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void input()
        {
            cout<<"Enter the real part:\t";
            cin>>real;
            cout<<"Enter the imaginary part:\t";
            cin>>imaginary;
        }

        Complex add(Complex obj)
        {
            Complex temp;
            temp.real=real+obj.real;
            temp.imaginary=imaginary+obj.imaginary;

            return temp;
        }

        void display()
        {
            cout<<real<<"+"<<imaginary<<"i";
        }
};


int main()
{
    Complex c1,c2,c3;
    cout<<"Enter the first complex number:\n";
    c1.input();
    cout<<"Enter the first complex number:\n";
    c2.input();

    c3=c1.add(c2);
    cout<<"Sum of complex number is:\n";
    c3.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.3 (2)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}