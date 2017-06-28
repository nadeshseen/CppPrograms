#include<iostream>
using namespace std;

class vector{
    float x;
public:
    void input();
    friend void modify(vector &,int );
    void scal_mul(int );
    void output();
};
void vector::input(){
    cout<<"Enter x component ";
    cin>>x;
}
void modify(vector &v,int a){
    v.x=a;
}
void vector::scal_mul(int a){
    x=x*a;
}
void vector::output(){
    cout<<x<<"i";
}

int main(){
    vector v;
    v.input();
    v.output();
    cout<<"\nAfter Multiplying\n";
    v.scal_mul(2);
    v.output();
    cout<<"\nAfter Modifying\n";
    modify(v,10);
    v.output();
    return 0;
}
