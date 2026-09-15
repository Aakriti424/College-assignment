/*6. Overloading Unary Operators
Write a C++ program to create a class Counter 
that stores a count value.
 Overload the ‘++’ operator (pre-increment)
 using a member function to increment the
  count.
7. Comprehensive Practical-Project:*/

#include<iostream>
using namespace std;

class Counter
{
    int count;
    public:
        Counter(int c=0)
            {
                count=c;
            }

            int operator++()
            {
                count=++count;
                return count;
            }
};

int main()
{
    int num;
    cout<<"Enter the number:\t";
    cin>>num;
    Counter c(num);
    int result=++c;
    cout<<"Incremented value is:\t"<<result;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.1 (6)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}