/*Copy Initialization
Write a C++ program to create a class Book with:
 A parameterized constructor.
 Demonstrate copy initialization by initializing one object using another at the time of
declaration.
Book b1(&quot;C++ Programming&quot;, 500);
Book b2 = b1; // Copy initialization*/

#include<iostream>
using namespace std;

class Book{
    string title;
    float price;
    public:
        Book(string t, float p)
        {
            title=t;
            price=p;
        }

        void display()
        {
            cout<<"Title:\t"<<title<<"\nPrice:\t"<<price;
        }
};

int main()
{
    Book b("Aakriti Bhandari",27);
    Book b2=b;
    b2.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.4 (6)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}
