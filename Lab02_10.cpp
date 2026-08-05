/*10. Pointers and Functions
 Write a C++ program to create a function that accepts an array and its size using pointers. The
function should calculate and return the sum of all elements in the array.*/

#include<iostream>
using namespace std;

int sumofarray(int *array, int n)
{
    int sum_arr=0;
    for(int i=0;i<n;i++)
    {
        sum_arr=sum_arr+*(array+i);
    }
    return sum_arr;
}

int main()
{
    int length;
    cout<<"Enter the number of integer array elements:\t";
    cin>>length;
    int *arr=new int[length];
    cout<<"Enter the integer elements of the array:\n";
    for(int i=0;i<length;i++){
        cin>>*(arr+i);
    }
    cout<<"The array is:\n";
    for(int i=0; i<length;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    int sum=sumofarray(arr,length);
    cout<<"\nSum of array elements is:\t"<<sum;
    delete[] arr;
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 2 (10)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}