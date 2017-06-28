#include<iostream>
using namespace std;
class num{
    int x,y;
public:
    void input();
    friend void max_num(num);
};
void num::input(){
    cout <<"Enter two numbers = ";
    cin>>x>>y;
}
void max_num(num n){
    if(n.x>n.y)
        cout<<n.x<<" is greater";
    else
        cout<<n.y<<" is greater";
}
int main(){
    num n1;
    n1.input();
    max_num(n1);
    return 0 ;
}
