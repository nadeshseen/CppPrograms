#include<iostream>
using namespace std;


int main()
{
    int x,y;
    cout<<"Enter numerator (x) and denominator (y) = ";
    cin>>x>>y;
    try
    {
        if(y==0)
            throw 10;
        cout<<"x/y = "<<x/y;
    }
    catch(int i)
    {
        cout<<"Exception : Division by 0 not allowed" << i;
    }
    return 0;
}
