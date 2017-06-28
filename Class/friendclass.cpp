#include<iostream>
using namespace std;

class x
{
    int x;
public:
    void func()
    {
        cout<<"Class X";
    }
    friend class y;
};
class y
{
    int y;
public:

    void fy()
    {
        x::func();
        cout<<"Class y";
    }
};

int main()
{
    x objx;
    y objy;
    objx.func();
    objy.fy();
    return 0;
}
