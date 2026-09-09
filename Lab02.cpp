#include<iostream>
using namespace std;

int main()
{
    int length1,length2;
    cout<<"Enter the size of set 1:\n";
    cin>>length1;
    int set1[length1];
    cout<<"Enter the elements of set 1:\n"; //IMPUT FOR SET 1
    int i, j;
    for(i=0;i<length1;i++)
    {
        cin>>set1[i];
    }
    cout<<"Enter the size of set 2:\n";
    cin>>length2;
    int set2[length2];
    cout<<"Enter the elements of set 2:\n"; //IMPUT FOR SET 1

    for(i=0;i<length2;i++)
    {
        cin>>set2[i];
    }

    // CARTESIAN PRODUCT
    cout<<"Cartesian Product of two sets is:\n";
    for(i=0;i<length1;i++)
    {
        for(j=0;j<length2;j++)
        {
            cout<<"("<<set1[i]<<","<<set2[j]<<")"<<"\t";
        }
    }
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:02\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}