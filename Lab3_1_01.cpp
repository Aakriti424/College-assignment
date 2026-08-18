/*1. Structures and Classes
Write a C++ program to design a structure named Student with data members: student ID, name, and
marks. Then design a class named Result that:
 Accepts student data.
 Calculates the average marks.
 Displays the result of the student.
Use both structure and class in a single program.*/

#include<iostream>
using namespace std;

/*struct Student{
    int id;
    string name;
    float math,english,nepali;
};

int main()
{
    Student s;
    float average;
    cout<<"Enter the id of the student:\n";
    cin>>s.id;
    cin.ignore();
    cout<<"Enter the name of the student:\n";
    getline(cin, s.name);
    cout<<"Enter the marks of the student is three subjects:\n";
    cin>>s.math>>s.english>>s.nepali;
    average=(s.english+s.math+s.nepali)/3;
    cout<<"Marks of student is:\nMaths:\t"<<s.math<<"\nEnglish:\t"<<s.english<<"\nNepali:\t"<<s.nepali<<endl;
    cout<<"Average of the marks is:\t"<<average;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}*/

class Student{
    public:
        int id;
        string name;
        float math,english,nepali;
};

int main()
{
    Student s;
    float average;
    cout<<"Enter the id of the student:\n";
    cin>>s.id;
    cin.ignore();
    cout<<"Enter the name of the student:\n";
    getline(cin, s.name);
    cout<<"Enter the marks of the student is three subjects:\n";
    cin>>s.math>>s.english>>s.nepali;
    average=(s.english+s.math+s.nepali)/3;
    cout<<"Marks of student is:\nMaths:\t"<<s.math<<"\nEnglish:\t"<<s.english<<"\nNepali:\t"<<s.nepali<<endl;
    cout<<"Average of the marks is:\t"<<average;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (1)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}
