/*3. Overloading Negation Operator (Unary)
Write a C++ program to create a class Number that:
 Stores an integer.
 Overloads the negation operator (-obj) to return the negative of the stored value.
 Demonstrate the negation effect using an object.*/

#include<iostream>
using namespace std;

class Number
{
    int num;
    public:
        Number(int c=0)
            {
                num=c;
            }

            int operator-()
            {
                return (-num);
            }

            void display()
            {
                cout<<"After increment:\t"<<num;
            }
};

int main()
{
    int num;
    cout<<"Enter the number:\t";
    cin>>num;
    cout<<"Before increment:\t"<<num<<endl;
    Number c(num);
    int result=-c;
    cout<<"After increment:\t"<<result;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.2 (3)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}