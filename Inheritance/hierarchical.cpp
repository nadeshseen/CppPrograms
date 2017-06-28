#include<iostream>
using namespace std;
class name
{
public:
    name(int x)
    {
        cout<<"Nadesh"<<x;
    }
};
class a : public name
{
public:
    a(int x):name(x){}
};
int main()
{
    a a1(3);

    return 0;
}
