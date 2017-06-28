#include<iostream>
using namespace std;
class shape
{
protected:
    double a,b;
public:
    shape(){a=0;b=0;}
    void read()
    {
        cin>>a>>b;
    }
    virtual void cal_area()=0;
};
class rectangle: public shape
{
public:
    void cal_area()
    {
        double area=a*b;
        cout<<"area of rectangle = "<<area<<"\n";
    }
};
class triangle : public shape
{
public:
    void cal_area()
    {
        double area=(a*b)/2;
        cout<<"area of triangle = "<<area<<"\n";
    }
};
int main()
{
    shape *ptr[2];
    rectangle r1;
    cout<<"Enter length and breadth of rectangle :";
    r1.read();
    triangle t1;
    cout<<"Enter base and perpendicular of triangle : ";
    t1.read();
    ptr[0]=&r1;
    ptr[1]=&t1;
    for(int i=0;i<2;i++)
    {
        ptr[i]->cal_area();
    }
}
