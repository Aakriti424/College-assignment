/*7. Comprehensive Practical-Project:
Write a C++ program to create a class Matrix that:
 Stores a 2D matrix using arrays.
 Overloads the ‘+’ operator to add two matrices.
 Overloads the ‘-’ operator to subtract two matrices.
 Uses member functions to perform operator overloading.*/

#include<iostream>
using namespace std;

class Matrix
{
    int row=0,column=0;
    int **array=nullptr;
    int i=0,j=0;
    public:
        void input_array()
        {
            cout<<"\nEnter the rows and columns of the matrix:\t";
            cin>>row>>column;
            array=new int*[row];
            for(i=0;i<row;i++)
            {
                array[i]=new int[column];
            }
            cout<<"Enter the elements of the array:\n";
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    cin>>array[i][j];
                }
            }
        }
        

        Matrix operator+( const Matrix &obj)
        {
            Matrix temp;
            if(row==obj.row && column==obj.column)
            {
                temp.row=row;
                temp.column=column;
                temp.array=new int*[row];
                for(i=0;i<row;i++)
                {
                    temp.array[i]=new int[column];
                    for(j=0;j<column;j++)
                    {
                        temp.array[i][j]=array[i][j]+obj.array[i][j];
                    }
                }
                return temp;
            }
            else  
            {
                cout<<"Since the dimension of two matrices are different, addition cannot be performed.\n";
            }
        }

        Matrix operator-( const Matrix &obj)
        {
            Matrix temp;
            if(row==obj.row && column==obj.column)
            {
                temp.row=row;
                temp.column=column;
                temp.array=new int*[row];
                for(i=0;i<row;i++)
                {
                    temp.array[i]=new int[column];
                    for(j=0;j<column;j++)
                    {
                        temp.array[i][j]=array[i][j]-obj.array[i][j];
                    }
                }
                return temp;
            }
            else  
            {
                cout<<"Since the dimension of two matrices are different, subtraction cannot be performed.\n";
            }
        }

        void Display()
        {
            for(i=0;i<row;i++)
            {
                for(j=0;j<column;j++)
                {
                    cout<<array[i][j]<<" ";
                }
                cout<<endl;
            }
        }

};

int main()
{
    Matrix m1,m2;
    m1.input_array();
    m2.input_array();
    Matrix add, subtract;
    add=m1+m2;
    subtract=m1-m2;
    cout<<"Addition of two matrices is:\n";
    add.Display();
    cout<<"Subtraction; of two matrices is:\n";
    subtract.Display();
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 4.1 (7)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}