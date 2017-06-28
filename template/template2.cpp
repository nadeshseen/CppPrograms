#include<iostream>
using namespace std;
template<class T>
class Box
{
    T length,breadth,width;
public:
    Box()
    {
        length=0;
        breadth=0;
        width=0;
    }
    Box(T l,T b,T w)
    {
        length=l;
        breadth=b;
        width=w;
    }
    T volume()
    {
        return length*breadth*width;
    }

};
int main()
{
    Box <int> Box1(3, 6, 2);
    Box <float> Box2(3.5, 6.0, 2.5);
    cout<<"Volume of Box 1 = "<<Box1.volume()<<endl;


    cout<<"Volume of Box 2 = "<<Box2.volume()<<endl;
    return 0;
}
