/* 2. Inline Functions
? Write a C++ program to define an inline function to calculate the square of
 a number.
Demonstrate its usage by calling it for different numbers.*/

#include<iostream>
using namespace std;

inline int square(int num)
{
	return num*num;
}

int main()
{
	int num;
	cout<<"Enter the number:\n";
	cin>>num;
	int result=square(num);
	cout<<"The square of the entered number is:\t"<<result<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (2)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
