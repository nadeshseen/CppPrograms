#include<iostream>
using namespace std;

class num
{
    float a,b;
public:
    num(){a=0;b=0;}
    num(int x,int y){a=x;b=y;}
    friend num operator+(num &A,num &B)
    {
        num C;
        C.a=A.a+B.a;
        C.b=A.b+B.b;
        return C;
    }
    friend num operator-(num &A,num &B)
    {
        num C;
        C.a=A.a-B.a;
        C.b=A.b-B.b;
        return C;
    }
    friend num operator*(num &A,num &B)
    {
        num C;
        C.a=A.a*B.a;
        C.b=A.b*B.b;
        return C;
    }
    friend num operator/(num &A,num &B)
    {
        num C;
        C.a=A.a/B.a;
        C.b=A.b/B.b;
        return C;
    }

    void show()
    {
        cout<<"Value of complex = "<<a<<" + i("<<b<<")"<<endl;
    }
};

int main()
{
    num A(10,6),B(5,3);
    num C;
    C=A+B;
    C.show();
    C=A-B;
    C.show();
    C=A*B;
    C.show();
    C=A/B;
    C.show();
    return 0;
}

