#include<iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout<<"Base class display called\n";
    }
};
class derv1: public base
{
public:
    void display()
    {
        cout<<"Derv1's display called\n";
    }
};
class derv2 : public base
{
public:
    void display()
    {
        cout<<"Derv2's display called\n";
    }
};
int main()
{
    base *ptr;
    derv1 d1;
    derv2 d2;
    ptr=&d1;
    ptr->display();
    ptr=&d2;
    ptr->display();
    return 0;
}
