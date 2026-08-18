/*4. Copy Constructor
Write a C++ program to create a class Book with:
 Data members: title and price.
 A parameterized constructor to initialize book details.
 A copy constructor to initialize one object using another.
 A function to display the book details.
Demonstrate the use of the copy constructor by creating one object from another.*/
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
        Book(Book &obj)
        {
            title=obj.title;
            price=obj.price;
        }

        void display()
        {
            cout<<"Title:\t"<<title<<"\nPrice:\t"<<price;
        }

};

int main()
{
    Book b("It ends with us",1000);
    Book b2(b);
    b2.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (4)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}