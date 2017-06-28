#include<iostream>
using namespace std;
class time{
    int x,y;
public:
    time(){x=0;y=0;};
    time(float a){x=a;y=0;};
    time(float a , float b){x=a;y=b;};
    friend time sum(time, time);
    friend void show(time);
};
time sum(time c1, time c2){
    time c3 ;
    c3.x = c1.x + c2.x;
    c3.y = c1.y + c2.y;
    return c3;
}
void show(time c){
    cout<<c.x<<"+i("<<c.y<<")";
}
int main(){
    time c3;
    time c2(2,5);
    time c1(1,6);
    c3 = sum(c1,c2);
    show(c3);
    return 0;
}
