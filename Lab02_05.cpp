/*Return by Reference
? Write a C++ program to return a reference to the larger of two numbers 
entered by the user. Display the larger number in the main function.*/
#include<iostream>
using namespace std;

int &larger_value( int &num1,int &num2)
{
	if(num1<num2)
	{
		return num2;
	}
	else{
		return num1;
	}
}

int main()
{
	int num1,num2;
	cout<<"Enter the two number:\n";
	cin>>num1>>num2;
	int &result=larger_value(num1,num2);
	cout<<"Larger number is:\t"<<result<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (5)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
