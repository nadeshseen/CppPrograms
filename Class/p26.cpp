#include<iostream>
using namespace std;
class area{
    float a;
public:
    area(){a=0;}
    area(float b,float l){a=b*l;}
    area(area &r){a=r.a;}
    void show();
};
void area::show(){
    cout<<"Area of rectangle is "<<a<<endl;
}
int main(){
    area rect(2,3);
    area rect2(rect);
    rect.show();
    rect2.show();
    return 0;
}

