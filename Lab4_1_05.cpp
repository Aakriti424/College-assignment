/* 5. Rules for Overloading Operators
Write a C++ program to create a class Box 
and overload the ‘*’ operator to multiply the
 volumes of two
boxes.
 Ensure the program follows the rules of 
operator overloading, such as:
o At least one operand must be a user-defined
 type.
o Cannot create new operators.
o Use member function syntax correctly.*/

#include<iostream>
using namespace std;

class Box
{
    int num1;
    public:
        Box(int num1=1){
            this->num1=num1;
        }
        int operator*(Box &obj)
        {
            return num1*obj.num1;
        }
};

int main()
{
    Box b1(20),b2(2);
    int multiply=b1*b2;
    cout<<"The multiplication of two number is:\t"<<multiply;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.1 (5)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}