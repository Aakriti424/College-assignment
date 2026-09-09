#include<iostream>
using namespace std;

class GCD
{
    public:
        int calculate(int a, int b)
        {
            if(a==0)
                return b;
            else
                return calculate(b%a,a);
        }
};

int main()
{
    int num1,num2;
    cout<<"Enter the two numbers:\n";
    cin>>num1>>num2;
    GCD g;
    int gcd=g.calculate(num1,num2);
    cout<<"GCD of two numbers is:\t"<<gcd;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:04\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}