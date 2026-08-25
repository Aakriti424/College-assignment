#include<iostream>
using namespace std;

class Distance{
    int meter;
    int centimeter;
    public:
        Distance(int m, int cm)
        {
            meter=m;
            centimeter=cm;
        }

        float operator+(const Distance &d)
        {
            float total_distance;
            total_distance=meter+d.meter+(float)(centimeter+d.centimeter)/100;
            return total_distance;
        }

        bool operator>(const Distance &d)
        {
            return ((meter+(float)centimeter/100)>(d.meter+(float)d.centimeter/100));
        }

        void display()
        {
            cout<<meter<<"m"<<" "<<centimeter<<"cm"<<" "<<"is the greater distance";
        }
        
};


int main()
{
    Distance d1(10,1001), d2(10,100);
    float result;
    result=d1+d2;
    if(d1>d2)
    {
        d1.display();
    }
    else{
        d2.display();
    }
    cout<<"\nThe sum of the distance is:\t"<<result;
    return 0;
}
