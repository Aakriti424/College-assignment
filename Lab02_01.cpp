/* 1. Function Overloading
? Write a C++ program to overload a function display():
o First version displays an integer.
o Second version displays a float.
o Third version displays a string.*/

#include<iostream>
using namespace std;

void display(int num)
{
	cout<<"Integer number is :\t"<<num<<endl;
}

void display(float num)
{
	cout<<"Float number is :\t"<<num<<endl;
}

void display(string str)
{
	cout<<"String is:\t"<<str<<endl;
}

int main()
{
	display(27);
	display(27.27f);
	display("Aakriti");
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (1)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
