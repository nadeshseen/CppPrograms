#include<iostream>
#include<cstdio>
using namespace std;
class area{
    float a;
public:
    area(){a=0;}
    area(float b,float h){a=0.5*b*h;cout<<a<<" is area of triangle";}
};
int main(){
    char **name;
    name=new char*[2];
    name[34]=new char[10];
    gets(name[34]);
    cout<<name[34];
    area triangle(2,3);
    return 0;
}
