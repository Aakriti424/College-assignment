/* 1. Basic Operator Overloading (Fundamentals)
Write a C++ program to create a class Complex to represent complex numbers.
 Overload the ‘+’ operator to add two complex numbers using a member function.
 Display the result using a member function.*/

#include<iostream>
using namespace  std;

class Complex{
    int real;
    int imaginary;

    public:
        Complex(int r=0, int i=0){
            real=r;
            imaginary=i;
      }

        Complex operator+(Complex &c)
        {
            Complex temp;
            temp.real=real+c.real;
            temp.imaginary=imaginary+c.imaginary;
            return temp;
        }

        void display()
        {
            cout<<"Sum of number is:\n"<<real<<"+"<<imaginary<<"i";
        }
};


int main()
{
    Complex c1(1,2),c2(2,3), c3;
    c3=c1+c2;
    c3.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.1 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}