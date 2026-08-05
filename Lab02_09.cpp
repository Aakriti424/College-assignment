/*Pointers and Arrays
 Write a C++ program to dynamically allocate memory for an array using pointers. Accept
elements from the user and display the array contents.*/

#include<iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of the array:\n";
    cin>>length;
    int *array=new int[length];
    cout<<"Enter the elements of the  array:\n";
    for(int i=0; i<length;i++)
    {
        cin>>*(array+i);
    }
    cout<<"Entered elements of an array is:\n";
    for(int i=0; i<length;i++)
    {
        cout<<*(array+i)<<" ";
    }
    delete[] array;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (8)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}