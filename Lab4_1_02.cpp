/* Overloading Relational Operators
Write a C++ program to create a class 
Distance that stores feet and inches.
 Overload the ‘&gt;’ operator to compare 
two Distance objects based on their total length.
 Display the comparison result.*/

#include<iostream>
using namespace std;

class Distance
{
    int feet;
    int inches;
    public:
    Distance(int f, int i)
    {
        feet=f;
        inches=i;
    }
    bool operator >(Distance obj)
    {
        return((feet*12+inches)>((obj.feet)*12+obj.inches));
    }

    void display()
    {
        cout<<feet<<" ft. and "<<inches<<" inches is the greater distance";
    }
};

int main()
{
    Distance d1(10,70),d2(10,30);
    bool result=d1>d2;
    if(result==true)
        d1.display();
    else
        d2.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.2 (2)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}