#include<iostream>
using namespace std;
class Shape
{
protected:
    double x,y;
public:
    void input(int a){x=a;y=0;}
    void input(int a, int b){x=a;y=b;}
    virtual void displayArea()=0;
};
class Rectangle : public Shape
{
public:
    void displayArea()
    {
        cout<<"Area of Rectangle is : "<<x*y<<endl;
    }
};

class Triangle : public Shape
{
public:
    void displayArea()
    {
        cout<<"Area of Triangle is : "<<0.5*x*y<<endl;
    }
};

class Circle : public Shape
{
public:
    void displayArea()
    {
        cout<<"Area of Circle is : "<<3.14*x*x<<endl;
    }
};
int main()
{
    Shape *s[3];
    Rectangle r;
    s[0]=&r;
    s[0]->input(2,3);
    Triangle t;
    s[1]=&t;
    s[1]->input(2,3);
    Circle c;
    s[2]=&c;
    s[2]->input(2);
    int i;
    for(i=0;i<3;i++)
    {
        s[i]->displayArea();
    }

    return 0;
}
