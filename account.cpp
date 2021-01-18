#include<iostream>
using namespace std;

class account
{
    public:
    double acc_bal;
    account(double ab)
    {
        if(ab>0)
        {
            acc_bal = ab;
        }
        else
        {
            acc_bal = 0.0;
        }
        
    }

    void credit()
    {
        int c;
        cout<<"\nEnter an amount to credit: ";
        cin>>c;
        acc_bal = acc_bal + c;
        cout<<"\nThe balance now is:  "<<acc_bal;
    }

    void debit()
    {
        int d;
        cout<<"\nEnter an amount to debit: ";
        cin>>d;
        if(d>acc_bal)
        {
            cout<<"\nThe input amount exceeds the current balance!!!!";
            cout<< acc_bal;
        }
        else
        {
            acc_bal = acc_bal - d;
            cout<<"\nThe current balance now is:  "<<acc_bal;
        }

    }

    void getbalance()
    {
        cout<<"\nThe current account balance is :  "<<acc_bal;
    }


};

class savings_account : public account
{
    public:
    double interest;
    savings_account(double b,double t):account (t)
    {
        interest = b;
    }

    void calculate_interest()
    {
        double a;
        double f;
        a=acc_bal;
        f = (a*interest)/100;
        cout<<"\nThe interest obtained is: "<<f;
    }

};

class checking_account : public account
{
    public:
    double x;
    double fee;
    checking_account(int c,double t):account (t)
    {
        fee = c;
    }
    void credit()
    {
        int c;
        cout<<"\nEnter an amount to credit: ";
        cin>>c;
        acc_bal = acc_bal + c - fee;
        cout<<"\nThe balance now is:  "<<acc_bal;
    }

    void debit()
    {
        int d;
        cout<<"\nEnter an amount to debit: ";
        cin>>d;
        if(d>acc_bal)
        {
            cout<<"\nThe input amount exceeds the current balance!!!!";
            cout<< acc_bal;
        }
        else
        {
            acc_bal = acc_bal - d - fee;
            cout<<"\nThe current balance now is:  "<<acc_bal;
        }

    }
};


int main()
{
    double l , m;
    int n,r;
    cout<<"\nEnter the Savings account balance: ";
    cin>>l;
    cout<<"\nENter the Checking account balance: ";
    cin>>m;
    class savings_account a(7,l);
    class checking_account k(350,m);

    cout<<"\nEnter the account\n1.Saving Account\n2.Checking Account\n3.Exit\nEnter your choice: ";
    cin>>n;

    switch(n)
    {
        case 1:
            cout<<"\nYou have entered your Savings accout!!";
            a.calculate_interest();
            cout<<"\nWhat do you want to do?\n1.Add money\n2.Withdraw\nEnter your choice: ";
            cin>>r;
            h:
            if(r ==1)
            {
                a.credit();
            }
            else if(r==2)
            {
                a.debit();

            }
            else
            {
                cout<<"\nWrong choice!!!";
                goto h;
            }

            a.getbalance();
            break;
        
        case 2:
            cout<<"\nYou have entered your Checking account!!";
            e:
            cout<<"\nWhat do you want to do?\n1.Add money\n2.Withdraw\nEnter your choice: ";
            cin>>r;
            if(r ==1)
            {
                k.credit();
            }
            else if(r==2)
            {
                k.debit();

            }
            else
            {
                cout<<"\nWrong choice!!!";
                goto e;
            }

            k.getbalance();
            break;
        
        default: exit(0);
    }

    return 0;

}
