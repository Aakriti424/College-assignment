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

    char operation;
    cout<<"Which operation do you want to perform?\na)Union\nb)Intersection\nc)Subtraction\nPlease enter the respective alphabet.\n";
    cin>>operation;
    int k=0;
    int setop[k];
    switch(operation)
    {
        case 'a':
        for(i=0;i<length1;i++)
        {
            setop[k]=set1[i];
            k++;
        }

        for(i=0;i<length2;i++)
        {
            int flag=1;
            for(j=0;j<length1;j++)
            {
                if(set1[i]==set2[i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                setop[k]=set2[i];
                k++;
            }
        }

        cout<<"Union of entered set is:\n";
        for(i=0;i<k;i++)
        {
            cout<<setop[i]<<"\t";
        }
        break;

        case 'b':
            for(i=0;i<length1;i++)
            {
                for(j=0;j<length2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        setop[k]=set1[i];
                        k++;
                    }
                }
            }

            cout<<"Intersection of the entered set is:\n";
            for(i=0;i<k;i++)
            {
                cout<<setop[i]<<"\t";
            }
            break;

        case 'c':
            for(i=0;i<length1;i++)
            {
                int flag=1;
                for(j=0;j<length2;j++)
                {
                    if(set1[i]==set2[j])
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==1)
                {
                    setop[k]=set1[i];
                    k++;
                }
            }

            cout<<"Difference of set2 from set1 is:\n";
            for(i=0;i<k;i++)
            {
                cout<<setop[i]<<"\t";
            }
            break;

        default:
            cout<<"Requested operation is not valid.\n";
            break;
    }
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:01\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}