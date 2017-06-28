#include<iostream>
using namespace std;

class num
{
    float a;
public:
    num(){a=0;}
    num(int x){a=x;}
    friend num operator+(num &A,num &B)
    {
        num C;
        C.a=A.a+B.a;
        return C;
    }
    friend num operator-(num &A,num &B)
    {
        num C;
        C.a=A.a-B.a;
        return C;
    }
    friend num operator*(num &A,num &B)
    {
        num C;
        C.a=A.a*B.a;
        return C;
    }
    friend num operator/(num &A,num &B)
    {
        num C;
        C.a=A.a/B.a;
        return C;
    }

    void show()
    {
        cout<<"Value of a = "<<a<<endl;
    }
};

int main()
{
    num A(10),B(5);
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

