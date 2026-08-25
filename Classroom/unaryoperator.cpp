#include<iostream>
using namespace std;

class Coordinate{
    int x,y;
    public:
        Coordinate()
        {
        }
        Coordinate(int x, int y)
        {
            this->x=x;
            this->y=y;
        }

        Coordinate operator- ()
        {
            return Coordinate(-x,-y);
        }

        void display()
        {
            cout<<"x:\t"<<x<<"\ty:\t"<<y<<endl;
        }
};

int main()
{
    Coordinate c(1,2),c2(-4,-5),c3,c4;
    c3=-c;
    c3.display();

    c4=-c2;
    c4.display();
    return 0;
    
}