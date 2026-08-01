/*Write a C++ program to calculate the area of a circle. Use a preprocessor
 directive to
define the value of p (pi). Include header files using #include
 and demonstrate conditional
compilation using #ifdef and #endif.*/

#include<iostream>
#define p 3.14
#define Output
using namespace std;

int main()
{
	float radius, area;
	cout<<"Enter the radius of the circle:\t";
	cin>>radius;
	area=p*radius*radius;
	
	#ifdef Output
		cout<<"---Displaying using #ifdef---\n";
		cout<<"Radius is:\t"<<radius<<endl;
	#endif
		cout<<"Area of circle is:\t"<<area<<endl;
	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (3)\tName:Aakriti Bhandari\tRoll No.:27";
	return 0;
}
