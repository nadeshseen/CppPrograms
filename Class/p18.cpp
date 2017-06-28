#include<iostream>
using namespace std;
class num2;
class num1{
    int x;
public:
    void input();
    friend void mean_num(num1,num2);
};
class num2{
    int y;
public:
    void input();
    friend void mean_num(num1,num2);
};


void num2::input(){
    cout <<"Enter y = ";
    cin>>y;
}
void num1::input(){
    cout <<"Enter x = ";
    cin>>x;
}
void mean_num(num1 n,num2 m){
    float z=(float)(n.x+m.y)/2;
    cout<<"Mean is "<<z;
}
int main(){
    num1 n1; num2 n2;
    n1.input();
    n2.input();
    mean_num(n1,n2);
    return 0 ;
}
