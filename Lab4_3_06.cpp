/*6. Overloading Plus Operator for String Concatenation
Write a C++ program to create a class MyString that:
 Stores a string using a character array.
 Overloads the ‘+’ operator to concatenate two strings.
 Display the concatenated result.*/

#include<iostream>
#include<string>
using namespace std;

class Mystring{
    string name;
    public:
        Mystring(string n=" ")
        {
            name=n;
        }

        Mystring operator+(const Mystring &obj)
        {
            Mystring temp;
            temp.name=name+" "+obj.name;
            return temp;
        }
        void display()
        {
            cout<<"Concatenated string is:\t"<<name;
        }
};

int main()
{
    Mystring s1("Aakriti"),s2("Bhandari");
    Mystring s3=s1+s2;
    s3.display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.3 (6)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}