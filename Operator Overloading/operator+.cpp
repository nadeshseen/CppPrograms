#include<iostream>
using namespace std;

class num
{
    int a,b;
public:
    num(){a=0;b=0;}
    num(int x,int y){a=x;b=y;}
    num operator+(num B)
    {
        num C;
        C.a=a+B.a;
        C.b=b+B.b;
        return C;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
};
int main()
{
    num a(5,10),b(6,24),d(4,10);
    num c;
    c=a+b+d+b;
    c.display();
    return 0 ;
}
