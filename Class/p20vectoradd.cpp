#include<iostream>
using namespace std;

class vector{
    int x,y,z;
public:
    vector(){x=0;y=0;z=0;};
    void input();
    void output();
    friend vector add(vector,vector);
};
void vector::input(){
    cout<<"Enter x, y and z component ";
    cin>>x>>y>>z;
}
vector add(vector v1,vector v2){
    vector v3;
    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;
    return v3;
}
void vector::output(){
    cout<<x<<"i+"<<y<<"j+"<<z<<"k";
}
int main(){
    vector v3;
    vector v1,v2;
    v1.input();
    v2.input();
    v3 = add(v1,v2);
    v3.output();
    return 0;
}
