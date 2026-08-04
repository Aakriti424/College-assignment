/* Write a C++ program to declare a pointer to an integer, assign it the address of an integer
variable, and display the value using the pointer.*/

#include<iostream>
using namespace  std;

int main()
{
	int *number,num;
	cout<<"Enter a number:\n";
	cin>>num;
	number=&num;
	cout<<"The number is:\t"<<*number;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (7)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
