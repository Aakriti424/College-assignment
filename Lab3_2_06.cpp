/* Comprehensive Practical-Project:
Write a C++ program to create a class BankAccount with:
 Data members: account holder’s name, account number, and balance.
 Constructors:
o Default constructor to initialize balance to zero.
o Parameterized constructor to initialize all details.
o Copy constructor to copy data from another object.
 A destructor that displays a message when the object is destroyed.
 Functions to deposit and withdraw amounts.
Create multiple objects using different constructors and display their details.*/


#include<iostream>
using namespace std;

class BankAccount{
    int acc_num;
    string holder;
    float balance;
    public:
        BankAccount()
        {
            balance=0;
        }
        BankAccount(string n, int num)
        {
            holder=n;
            acc_num=num;
            balance=0;
        }

        BankAccount(BankAccount &obj)
        {
            holder=obj.holder;
            acc_num=obj.acc_num;
            balance=obj.balance;
        }

        ~BankAccount()
        {
            cout<<"Destructor is called\n";
        }

        void deposite()
        {
            float deposit;
            cout<<"Enter the amount you want to deposite:\t";
            cin>>deposit;
            balance+=deposit;
        }

        void withdraw()
        {
            float withd;
            cout<<"How much do you want to withdraw?\t";
            cin>>withd;
            if(balance<withd)
            {
                cout<<"You don't have sufficient balance.";
            }
            else
            {
                balance-=withd;
            }
        }
};

int main()
{
    string user;
    int acc;
    cout<<"Enter the name of the account holder:\n";
    getline(cin, user);
    cout<<"Enter the account number:\n";
    cin>>acc;

    BankAccount b;
    BankAccount b1(user, acc);
    BankAccount b2(b1);

    char op, c;
    
    do
    {
        cout<<"a)Deposite money\nb)Withdraw money\n";
        cin>>op;
        switch(op)
        {
            case 'a':
                b2.deposite();
                break;
            case 'b':
                b2.withdraw();
                break;
            default:
                cout<<"Please enter a or  b for the respective operation.\n";
                break;
        }
        cout<<"\nDo you want to continue?Please enter 'y' for yes and any other key for no.\n";
        cin>>c;
    } while (c=='y');
    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.2 (6)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}