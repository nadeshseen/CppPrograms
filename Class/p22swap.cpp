#include<iostream>
using namespace std;
class num2;
class num1{
    int x;
public:
    friend void input(num1 &,num2 &);
    friend void swapping(num1 &,num2 &);
    friend void output(num1 &,num2 &);
};
class num2{
    int y;
public:
    friend void input(num1&,num2 &);
    friend void swapping(num1 &,num2 &);
    friend void output(num1 &,num2 &);
};


void swapping (num1 &a,num2 &b){
    int temp;
    temp=a.x;
    a.x=b.y;
    b.y=temp;
}
void input(num1 &a,num2 &b){
    cout<<"Enter x and y= ";
    cin>>a.x>>b.y;
}
void output(num1 &a,num2 &b){
    cout<<"\nx="<<a.x<<"y="<<b.y;
}

int main(){
    num1 n1; num2 n2;
    input(n1,n2);
    output(n1,n2);
    swapping(n1,n2);
    output(n1,n2);
    return 0;
}
