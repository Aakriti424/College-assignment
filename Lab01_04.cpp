/*Write a C++ program that uses two different namespaces containing variables
 with the same name. Demonstrate how to access these variables using the 
 scope resolution operator.*/
 
 #include<iostream>
 using namespace std;
namespace aakriti{
 	string Name="Aakriti Bhandari";
 }
 
namespace student{
 	string Name="Aakriti Bhandari";
 }
 
 int main()
 {
 	cout<<"Displaying from aakriti namespace:\t"<<aakriti::Name<<endl;
 	cout<<"Displaying from student namespace:\t"<<student::Name<<endl;
 	cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 1 (4)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
 }
