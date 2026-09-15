/*. Overloading Post-Increment Operator (Unary)
Write a C++ program to create a class Counter that:
 Stores a count value.
 Overloads the post-increment operator (obj++) using a member function to increase the count.
 Clearly differentiate and display the behavior of pre-increment and post-increment.*/


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
                int *temp=&count;
                ++(*temp);
                return *temp;
            }

            void display()
            {
                cout<<"After increment:\t"<<count;
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
    cout<<"After increment:\t"<<result;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.2 (2)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}