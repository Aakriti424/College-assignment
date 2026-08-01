/* Write a C++ program that dynamically allocates memory for an array of integers based
on user input. Accept elements from the user, display them, and then deallocate the
memory using delete.*/

#include<iostream>
#include<memory>
using namespace std;

int main()
{
	int *nptr;
	int n;
	cout<<"How many numbers do you want to enter?\n";
	cin>>n;
	nptr=new int[n];
	cout<<"Enter the numbers:\n";
	for(int i=0;i<n;i++)
	{
		cin>>nptr[i];
	}
	cout<<"Entered numbers are:\n";
	for(int i =0; i<n;i++)
	{
		cout<<nptr[i]<<endl;
	}
	delete[] nptr;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (7)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
