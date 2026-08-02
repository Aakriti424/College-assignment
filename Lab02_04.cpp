/*Pass by Reference
? Write a C++ program to swap two numbers using pass-by-reference in a 
function.*/

#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int num1, num2;
	cout<<"Enter the two numbers:\n";
	cin>>num1>>num2;
	cout<<"BEFORE SWAPPING:\nNumber 1:\t"<<num1<<" "<<"Number 2:\t"<<num2<<endl;
	swap(num1,num2);
	cout<<"AFTER SWAPPING:\nNumber 1:\t"<<num1<<" "<<"Number 2:\t"<<num2<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (4)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
