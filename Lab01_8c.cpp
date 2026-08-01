#include<iostream>
using namespace std;

int main()
{
	char operation;
	float num1, num2;
	cout<<"Enter the two numbers respectively:\n";
	cin>>num1>>num2;
	cout<<"Enter the operation you want to perform:\na) addition\nb) subtraction\nc) multiplication\nd) division\n";
	cin>>operation;
	switch(operation){
		case 'a':
			cout<<"Addition is:\t"<<num1+num2;
			break;
	
		case 'b':	
			cout<<"Subtraction is:\t"<<num1-num2;
			break;
		case 'c':
			cout<<"Multiplication is:\t"<<num1*num2;
			break;
		case 'd':
			cout<<"Division is:\t"<<num1/num2;
			break;
		default:
			cout<<"Invalid operation.";
	}
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (8(c))\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
