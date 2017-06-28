#include<iostream>
using namespace std;
class cont1
{
private:
    int a;
public:
    cont1(int aa)
    {
        cout<<"cont1's a single parameter constructor \n";
        a=aa;

    }
};
class cont2
{
private:
    int b;
public:
    cont2(int bb)
    {
        cout<<"cont2's a single parameter constructor\n";
        b=bb;
    }
};
class comp
{
    int c;
    cont1 c1; cont2 c2;
public:
    comp(int cc,int bb,int aa):c1(aa)
    {

        cout<<"comp's constructor with three parameters\n";
        c=cc;
    }
};
int main()
{

    comp c3 (30,23,22);
    return 0;
}
