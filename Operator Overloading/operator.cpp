#include<iostream>
using namespace std;

class Classname
{
    int a,b;
public:
    void input(int x,int y)
    {
        a=x;b=y;
    }
    void display()
    {
        cout<<a<<" "<<b;
    }
    void operator-()
    {
        a=-a;
        b=-b;
    }
};

int main()
{
    Classname a;
    a.input(5,10);
    a.display();
    -a;
    a.display();
    return 0;
}
