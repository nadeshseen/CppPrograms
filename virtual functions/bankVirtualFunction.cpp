#include<iostream>
#include<string.h>

using namespace std;
class employee
{
private:
    char name[20];
public:
    void read()
    {
        cout<<"Enter name :";
        cin>>name;
    }
    void show()
    {
        cout<<"Name of employee = "<<name<<endl;
    }
    virtual void inputData()=0;
    virtual int filter()=0;
};
class marketing : public employee
{
private:
    int acctOpen;
public:
    void inputData()
    {
        read();
        cout<<"Enter number of accounts opened = ";
        cin>>acctOpen;
    }
    int filter()
    {
        if(acctOpen<20)
            return -1;
        else
            return 0;
    }
};
class manager : public employee
{
private:
    int target;
public:
    void inputData()
    {
        read();
        cout<<"Enter the amount achieved : ";
        cin>>target;
    }
    int filter()
    {
        if(target<1000000)
            return 2;
        else
            return 0;
    }
};
int main()
{
    employee *ptr[20];


    int n=0,choice;
    char ch='n';
    do
    {
        cout<<"Enter 1 for marketing executive or 2 for manager : ";
        cin>> choice;
        if(choice==1)
            ptr[n]=new marketing;
        else if(choice==2)
            ptr[n]=new manager;
        else{
            cout<<"Invalid choice\n";
            continue;
        }
        ptr[n]->inputData();
        n++;
        cout<<"Want to input more (y/n)? : ";
        cin>>ch;
    }while(ch=='y');
    for (int i=0;i<n;i++)
    {
        ptr[i]->show();
        if(ptr[i]->filter())
            cout<<"The employee should be terminated\n";
        else
            cout<<"Employee is a good performer\n";
    }
    return 0;
}
