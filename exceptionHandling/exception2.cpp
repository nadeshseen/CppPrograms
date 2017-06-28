#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num;
    double res;

    cout<<"Enter anumber :";
    cin>>num;
    try
    {
        if(num>0xffff)
            throw 10;
        if(num<0)
            throw 'e';
        cout<<"Square root of "<<num<<"is="<<sqrt(num);
    }
    catch(int)
    {
        cout<<"Exception :out of range \n";
    }
    catch(char)
    {
        cout<<"Exception :Square root of negative number doesn't exist";
    }
    return 0;
}
