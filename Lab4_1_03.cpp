/*3. Operator Overloading with Class Members
Write a C++ program to create a class Time that stores hours and minutes.
 Overload the ‘+’ operator as a member function to add two Time objects and return the result
as an object.*/

#include<iostream>
using namespace std;

class Time{
    int hours;
    int minutes;
    public:
        Time(int h=0, int m=0)
        {
            hours=h;
            minutes=m;
        }

    Time operator+(Time obj)
    {
        Time temp;
        temp.hours=hours+obj.hours;
        temp.minutes=minutes+obj.minutes;
        if(temp.minutes>60)
        {
            
        }
        return temp;
    }

    void display()
    {
        cout<<"Sum of two time is: "<<hours<<" hours and "<<minutes<<" minutes";
    }
};

int main()
{
    Time t1(20,60), t2(20,120);
    Time t3;
    t3=t1+t2;
    t3.display();
}