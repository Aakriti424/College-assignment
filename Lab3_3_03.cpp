/*3. Static Data Members and Static Member Functions
Write a C++ program to create a class Employee that:
 Contains a static data member to count the number of employees.
 Has a member function to input employee details.
 Has a static function to display the total number of employees created.
 Demonstrate calling the static function using the class name (without using an object).
*/

#include<iostream>
using namespace  std;

class Employee{
    static int count;
    public:
        void inputdata()
        {
            int id;
            string name;
            int age;
            count++;
            cout<<"------ FOR EMPLOYEE"<<" "<<count<<"------"<<endl;
            cout<<"Enter the id of the employee:\t";
            cin>>id;
            cin.ignore();
            cout<<"Enter the name of the employee:\t";
            getline(cin, name);
            cout<<"Enter the age of the employee:\t";
            cin>>age;
        }

        static void display()
        {
            cout<<"The total number of employee is "<<count;
        }
};

int Employee::count;

int main()
{
    Employee e1,e2,e3;
    e1.inputdata();

    e2.inputdata();

    e3.inputdata();

    e3.display();

    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.3 (3)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;

}