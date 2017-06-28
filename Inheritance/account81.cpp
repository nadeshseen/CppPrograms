#include<iostream>
#include<string.h>
#include<math.h>

#define MIN 500
#define SERVICE_CHARGE 100
#define RATE 0.15

using namespace std;

class Account
{
protected:
    char name[100];
    int accNumber;
    char accType[100];
public:
    Account(char *n,char*t,int no);
};
Account::Account(char *n,char *t,int no)
{
    strcpy(name,n);
    strcpy(accType,t);
    accNumber=no;
}

class currAcc : public Account
{
private:
    int balance;
public:
    currAcc(char *n,char*t,int no):Account(n,t,no){}
    void deposit(int);
    void withdraw(int);
    void display();
};
void currAcc::deposit(int d)
{
    balance=d;
}
void currAcc::withdraw(int w)
{
    if(balance<w)
        cout<<"Sorry your balance is less";
    else if(balance<MIN)
    {
        cout<<"Your balance is less than minimum amount ("<<MIN<<") for withdrawal\nService Charge is charged\nDo you want to continue ?(No-0 or Yes-1) : \n";
        int ch;
        cin>>ch;
        if(ch==1&&balance<w+SERVICE_CHARGE)
            cout<<"Sorry your balance is less";
        else if(ch==1&&balance>w+SERVICE_CHARGE)
            balance-=(w+SERVICE_CHARGE);
    }
    else
        balance-=w;
}
void currAcc::display()
{
    cout<<"Your current account balance is "<<balance<<endl;
}

class savAcc:public Account
{
    float balance;
    int d,m,y;
public:
    savAcc(char *n,char*t,int no):Account(n,t,no){}
    void deposit(int );
    void withdraw(int );
    void display();
    void setDate(int dd,int mm,int yy){d=dd;m=mm;y=yy;}
    void interest();
};
void savAcc::deposit(int d)
{
    balance=d;
}
void savAcc::withdraw(int w)
{
    if(balance<w)
        cout<<"Sorry your balance is less";
    else if(balance<MIN)
    {
        cout<<"Your balance is less than minimum amount ("<<MIN<<") for withdrawal\nService Charge is charged\nDo you want to continue ?(No-0 or Yes-1) : \n";
        int ch;
        cin>>ch;
        if(ch==1&&balance<w+SERVICE_CHARGE)
            cout<<"Sorry your balance is less";
        else if(ch==1&&balance>w+SERVICE_CHARGE)
            balance-=(w+SERVICE_CHARGE);
    }
    else
        balance-=w;

}
void savAcc::display()
{
    cout<<"Your saving account's balance is "<<balance<<endl;

}
void savAcc::interest()
{
    int D[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int d1,y1,m1;
    cout<<" Enter today's date :(i,e day,month,year) ";
    cin>>d1>>m1>>y1;
    int iday,fday;
    iday=d;
    fday=d1;
    int i;
    for(i=0;i<m1;i++)
    {
    fday+=D[i];
    }
    for(i=0;i<m;i++)
    {
    iday+=D[i];
    }
    int tday;
    tday=fday-iday;
    float ty;
    ty=float(tday)/365+y1-y;
    float intrst;
    intrst=ty*RATE*balance;
    cout<<" Interest is : "<<intrst<<"\n";
    balance+=intrst;
}

int main()
{
    float d;
    cout<<" Enter customer name :";
    char name[100];
    cin>>name;
    cout<<" Enter account number :";
    int number;
    cin>>number;
    cout<<" Enter your deposit amount : ";
    cin>>d;
    cout<<"Enter your withdrawal amount : ";
    float w;
    cin>>w;
    currAcc A(name,"asd;",number);
    A.deposit(d);
    A.withdraw(w);
    A.display();

    savAcc B(name,"Savings",number);
    B.deposit(w);
    B.withdraw(d);
    B.display();

    return 0;
}
