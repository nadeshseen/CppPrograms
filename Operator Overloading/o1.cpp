#include<iostream>
using namespace std;

class num
{
    int a;
public:
    num(){a=0;}
    num(int x){a=x;}
    num operator-(num B)
    {
        num C;
        C.a=a-B.a;
        return C;
    }
    void display()
    {
        cout<<a;
    }
};
int main()
{
    num a(5),b(6);
    num c;
    c=a-b;
    c.display();
    return 0 ;
}
