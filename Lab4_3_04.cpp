/*4. Overloading Plus Operator (Binary)
Write a C++ program to create a class Complex that:
 Stores real and imaginary parts of a complex number.
 Overloads the ‘+’ operator to add two complex numbers.
 Display the result using a member function.*/

#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
        
        Complex(int r=0, int i=0)
        {
            real=r;
            imaginary=i;
        }

        Complex operator+(const Complex &obj)
        {
            Complex temp;
            temp.real=real+obj.real;
            temp.imaginary=imaginary+obj.imaginary;
            return temp;
        }

        void display()
        {
            cout<<"Sum of two complex number is:\t"<<real<<"+"<<imaginary<<"i";
        }
};

int main()
{
    Complex c1(2,3),c2(3,2),c3;
    c3=c1+c2;
    c3.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.3 (4)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}