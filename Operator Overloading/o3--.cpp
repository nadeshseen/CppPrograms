#include<iostream>
using namespace std;

class num
{
    int a;
public:
    num(){a=0;}
    num(int x){a=x;}
    void operator--()
    {
        a=a-1;
    }
    void show()
    {
        cout<<"Value of a = "<<a;
    }
};

int main()
{
    num A(10);
    --A;
    A.show();
    return 0;
}
