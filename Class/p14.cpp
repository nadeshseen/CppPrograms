#include<iostream>
using namespace std;
class account {
    int acc_no; char name[15]; double balance; char type[20];
public:
    void input_data();
    void deposit(double);
    void withdraw(double);
    void display_data();
};
void account::input_data(){
    cout<<"Enter account number, name, balance, type = ";
    cin>>acc_no>>name>>balance>>type;
}
void account::deposit(double amount){
    balance+=amount;
}
void account::withdraw(double amount){
    balance-=amount;
}
void account::display_data(){
    cout<<"\nAccount holder name =\t"<<name;
    cout<<"\nAccount Balance = \t"<<balance;
}
int main(){
    account acc1;
    int n;
    acc1.input_data();
    acc1.deposit(200);
    cout<<"After Depositing";
    acc1.display_data();

    acc1.withdraw(100);
    cout<<"After Withdraw";
    acc1.display_data();

}
