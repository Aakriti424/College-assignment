/*8. Comprehensive Practical-Project:
Write a C++ program to create a class Account with:
 A static data member to track the total number of accounts.
 A member function that uses the this pointer to handle data assignment.
 A friend function to access and display private account details.
 A function that passes and returns an object of the class.
 Demonstrate object initialization, copy initialization, and display all account details.*/

#include<iostream>
using namespace std;

class Account{
    static int count;
    string name;
    int acc;
    public:
        void assign(string name, int acc)
        {
            count++;
            this->name=name;
            this->acc=acc;
        }

        friend void access(Account &a);

        Account function(Account &obj)
        {
            Account a;
            a.name=obj.name;
            a.acc=obj.acc;
            count++;
            return a;
            
        }

        static int getcount()
        {
            return count;
        }
};

int Account::count;

void access(Account &a)
{
    cout<<"Holder:\t"<<a.name<<"\nAccount Number:\t"<<a.acc;
}

int main()
{
    Account a;
    a.assign("Aakriti Bhandari",27);
    Account ans;
    ans=ans.function(a);
    cout<<"Original account \n";
    access(a);
    cout<<"\nDuplicate account:\n";
    access(ans);
    cout<<"\nTotal number of account created is\t"<<ans.getcount();
}