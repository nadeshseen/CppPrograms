#include<iostream>
using namespace std;
class complex{
    int x,y;
public:
    complex();
    complex(int);
    complex(int , int);
    friend complex add(complex , complex);
    friend void show(complex);
};

complex::complex(){x=0;y=0;}
complex::complex(int a){x=a;y=0;}
complex::complex(int a,int b){x=a;y=b;}
complex add(complex c1,complex c2)
{
    complex c3;
    c3.x = c1.x+c2.x;
    c3.y = c1.y+c2.y;
    return c3;
}
void show(complex c)
{
    cout<<c.x<<"+i"<<c.y;
}
int main()
{
    complex a(2,3),b(3,4);
    complex c;
    c=add(a,b);
    show(c);
    return 0;
}
