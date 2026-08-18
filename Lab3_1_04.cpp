/*4. Defining Member Functions Inside and Outside the
Class. Write a C++ program to create a class Book with
the following:
 Data members: title, author, and price.
 Define a function inputData() inside the class to accept
 book details.
 Define a function displayData() outside the class to
display book details. Demonstrate the use of both styles
of member function definitions.*/


#include<iostream>
using namespace std;

class   Book{
    string title;
    string author;
    float price;
    public:
        void inputdata()
        {
            cout<<"Enter the title of the book:\t";
            getline(cin, title);
            cin.ignore();
            cout<<"Enter the name of the author:\t";
            getline(cin, author);
            cout<<"Enter the price of the book:\t";
            cin>>price;
        }

        void displaydata();
};

void Book::displaydata()
{
    cout<<"\nTitle:\t"<<title<<"\nAuthor:\t"<<author<<"\nPrice:\t"<<price;
}

int main()
{
    Book b;
    b.inputdata();
    b.displaydata();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (4)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}
