#include<iostream>
using namespace std;

class Box
{
    int length,breadth,width;
public:
    Box()
    {
        length=0;
        breadth=0;
        width=0;
    }
    Box(int l,int b,int w)
    {
        length=l;
        breadth=b;
        width=w;
    }
    int volume()
    {
        return length*breadth*width;
    }

};
int main()
{
    Box Box1(3, 1, 1);
    Box Box2(8, 6, 2);
    Box *ptrBox;
    ptrBox = &Box1;
    cout<<"Volume of Box 1"<<ptrBox->volume()<<endl;

    ptrBox = &Box2;
    cout<<"Volume of Box 2"<<ptrBox->volume()<<endl;
        return 0;
}
