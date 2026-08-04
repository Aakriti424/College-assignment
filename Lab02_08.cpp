/*Write a C++ program to input elements in an array and display them using pointer arithmetic
(without using array indexing).*/

#include<iostream>
using namespace std;

int main()
{
	int length;
	cout<<"Enter the number of integers:\n";
	cin>>length;
	int *integer[length];
	cout<<"Enter the array elememts:\n";
	for(int i=0;i<length;i++)
	{
		cin>>*integer[i];
	}
	cout<<"Array elements are:\n";
	for(int i=0; i<length;i++)
	{
		cout<<*integer+i<<" ";
	}
}
