/*Data Types and Type Conversion
? Write a C++ program to input an integer, a float, and a character from the user. Display
their values and sizes using the sizeof operator. Also, perform implicit and explicit type
conversions between the integer and float.*/


#include<iostream>
using namespace std;

int main()
{
	int num1=27;
	float num2=2.7;
	int sum;
	char c='A';
	cout<<"Integer is:\t"<<num1<<"\t and its size is:\t"<<sizeof(num1)<<endl;
	cout<<"Float is:\t"<<num2<<"\t and its size is:\t"<<sizeof(num2)<<endl;
	cout<<"Character is:\t"<<c<<"\t and its size is:\t"<<sizeof(c)<<endl;
	
	sum=num1+num2;
	cout<<"Implicit type conversion:\t"<<sum<<endl;
	sum=static_cast<int>(num1+num2);
	cout<<"Explicit type conversion:\t"<<sum<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (2)\tName:Aakriti Bhandari\tRoll No.:27";
}
