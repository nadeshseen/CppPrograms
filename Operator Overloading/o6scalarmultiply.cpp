#include<iostream>
using namespace std;

class num
{
    int a;
public:
    num(){a=0;}
    num(int x){a=x;}
    friend void operator*(num &A,int x)
    {
        A.a=A.a*x;
    }
    void show()
    {
        cout<<"Value of a = "<<a;
    }
};

int main()
{
    num A(10);
    A*10;
    A.show();
    return 0;
}
