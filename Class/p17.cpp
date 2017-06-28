
#include<iostream>
using namespace std;
class num{
    int x,y;
public:
    void input();
    friend void mean_num(num);
};
void num::input(){
    cout <<"Enter two numbers = ";
    cin>>x>>y;
}
void mean_num(num n){
    float z=(float)(n.x+n.y)/2;
    cout<<"Mean is "<<z;
}
int main(){
    num n1;
    n1.input();
    mean_num(n1);
    return 0 ;
}
