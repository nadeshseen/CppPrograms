#include<iostream>
using namespace std;
class Class2;
class Class1
{
    int x;
protected:
    int y;
public:
    Class1(int a){x=a;y=a;}
    void output();
    friend void swap(Class1 &, Class2 &);
};
class Class2:public Class1
{
    int x;
public:
    Class2(int a){x=a;y=a;}
    void output();
    friend void swap(Class1 &,Class2 &);
};
class Class3:public Class2
{
    int x;
public:
    Class3(){y=x;}
};
void Class1::output()
{
    cout<<"Class1 x : "<<x<<endl;
}
void Class2::output()
{
    cout<<"Class2 x : "<<x<<endl;
}
void swap(Class1 &a,Class2 &b)
{
    int temp;
    temp=a.x;
    a.x=b.x;
    b.x=temp;
}
int main()
{
    Class1 a(10);
    Class2 b(20);
    a.output();
    b.output();
    swap(a,b);
    a.output();
    b.output();

}
