//Write a C++ program to input a number and check whether it is positive, negative, or
//zero using if-else.


#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter the number:\n";
	cin>>num;
	if(num==0)
	{
		cout<<"The given number is zero";
	}
	
	else if(num>0)
	{
		cout<<"The given number is positive";
	}
	
	else
	{
		cout<<"The given number is negative";
	}
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (8(a))\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
