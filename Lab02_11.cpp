/*Create a complete C++ project that demonstrates:
o A function with default arguments.
o A function that passes and returns values by reference.
o The use of pointer arithmetic for array operations.
o Inline function to calculate squares of all elements in the array.*/

#include<iostream>
using namespace std;
inline void square(int*array,int len=5){
    int  i;
    cout<<"\nSquare of array elements are:\n";
    for( i=0;i<len;i++)
    {
        *(array+i)=*(array+i)**(array+i);
        cout<<*(array+i)<<"  ";
    }
}
int &display_arr(int*&array,int  len=5)
{
    int i,j,temp;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        { 
            if (array[i]>array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array[0];
    
}
int main()
{
    int len;
    cout<<"Enter length of the array:\n";
    cin>>len;
    int *arr=new int[len];
    for(int i=0;i<len;i++)
    {
        cin>>*(arr+i);
    }
    int &result=display_arr(arr,len);
    cout<<"Arranged array elements are:\n";
    for(int i=0;i<len;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<"\nLargest among them is:\t"<<result;
    square(arr,len);
    delete[] arr;
    return 0;
}