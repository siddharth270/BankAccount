#include<iostream>
using namespace std;

class account
{
private:
    char name[50];
    
    char type[10];
    int balance;
public:
    int anum;
    account()
    {
        anum = 0;
        balance = 0;
    }
  
    void input()
    {
        cout<<"\nEnter the name: ";
        cin>>name;
        cout<<"\nEnter the Account number: ";
        cin>>anum;
    }
    int deposit(int amount)
    {
        
        balance += amount;
        return balance;
    }
    
    int withdraw(int x)
    {
        
      
        if(x>balance)
        {
            cout<<"\nINSUFFICIENT BALANCE!!!";
        }
        else
        {
            balance -= x;
        }
        return balance;
    }
    
    void display()
    {
        cout<<"\nACCOUNT HOLDER: "<<name;
        cout<<"\nBALANCE:  "<<balance<<endl;
    }
    
};

int main()
{
    class account a[10];
    int amount;
    int wd, i;
    int ch;
    int bal;
    int acc;
    for (i=0;i<2;i++)
    {
        cout<<"\nEnter the details of customer "<<i+1;
        a[i].input();
    }
    while (1)
    {
            cout<<"\n###### WELCOME TO BANK OF INDIA ######";
            cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit\nEnter your choice: ";
            cin>>ch;
            switch(ch)
            {
            case 1:
                for(i=0;i<2;i++)
                {
                   cout<<"\nEnter an amount to deposit: ";
                   cin>>amount;
                   bal = a[i].deposit(amount);
                }
                break;
            case 2:
                for(i=0;i<2;i++)
                {
                    cout<<"\nEnter an amount to withdraw: ";
                    cin>>wd;
                    bal = a[i].withdraw(wd);
                }
                    break;
                    
            case 3:
                    cout<<"\nEnter account number to display: ";
                    cin>>acc;
                    for(i=0;i<2;i++)
                    {
                        if(acc==a[i].anum)
                        {
                           a[i].display();
                        }
                    }
                    break;
            case 4: exit(0);
            
                default: cout<<"\nWrong choice";
            }
    }
    
    return 0;
    
}
