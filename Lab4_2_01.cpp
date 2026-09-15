/*1. Overloading Pre-Increment Operator (Unary)
Write a C++ program to create a class Counter that:
 Stores a count value.
 Overloads the pre-increment operator (++obj) using a member function to increase the count
by 1.
 Display the count before and after incrementing.*/


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
    cout<<"Before increment:\t"<<num<<endl;
    Counter c(num);
    int result=++c;
    cout<<"Incremented value is:\t"<<result;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.2 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}