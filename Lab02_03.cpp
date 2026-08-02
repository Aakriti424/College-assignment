/* 3. Default Argument
? Write a C++ program that calculates the volume of a box using a function. T
he function should have default arguments for height and width.*/

#include<iostream>
using namespace std;

float volume(float length, float height=2.7, float width=2.7)
{
	return length*height*width;
}

int main()
{
	float l;
	float result;
	cout<<"Enter the length of the box:\n";
	cin>>l;
	result=volume(l);
	cout<<"Volume of a box is:\t"<<result<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (3)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
	
}
