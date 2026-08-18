/* Design a C++ program for a Bank Account Management
 System using classes.
 Data members: account number, account holder’s name,
 account balance.
 Member functions:
o To open an account (inside the class)
o To deposit money (outside the class)
o To withdraw money (outside the class)
o To display account information (inside the class)
 Dynamically create objects using pointers to manage 
multiple accounts.*/


#include<iostream>
using namespace std;

class Bank{
    int ac_num;
    string holder;
    float balance=0;
    public:

        void  user()
        {
            cout<<"Enter the account number:\t";
            cin>>ac_num;
            cin.ignore();
            cout<<"Enter the account holder's name:\t";
            getline(cin, holder);
            cout<<"Balance:\t"<<balance;
        }

        void deposit();
        void withdraw();

        void display()
        {
            cout<<"Account number:\t"<<ac_num<<"\nAccount holder:\t"<<holder<<"\nBalance:\t"<<balance;
        }

};

void Bank::deposit()
{
    float deposite;
    cout<<"Enter the deposit amount:\t";
    cin>>deposite;
    balance+=deposite;
}

void Bank::withdraw()
{
    float amount;
    cout<<"Enter the deposit amount:\t";
    cin>>amount;
    if(balance==0)
        cout<<"You don't have sufficient amount.";
    else
        balance-=amount;
}


int main()
{
    Bank *ptr=new  Bank;
    char c,q;
    q='y';
    cout<<"Welcome to the Bank! How can we help you?\n";
    do
    {
        cout<<"\na) Create new accoount\nb) Deposite account\nc) Withdraw amount\nd) Display account details.\n";
        cin>>c;
        switch(c){
            case 'a':
                ptr->user();
                break;
            case 'b':
                ptr->deposit();
                break;
            case 'c':
                ptr->withdraw();
                break;
            case 'd':
                ptr->display();
                break;
            default:
                cout<<"The operation is invalid. Please enter a or b or c  or d according to  your interest.";
                break;
        }
        cout<<"\nDo you want to continue?y/n";
        cin>>q;
    } while (q=='y');
    
    delete ptr;

    cout<<"\n--------------------------------\n";
    cout<<"Lab No.:Unit 3.1 (5)\tName:Aakriti Bhandari\tRoll No.:27";
    return 0;
}