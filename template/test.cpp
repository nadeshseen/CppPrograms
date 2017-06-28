#include<iostream>
using namespace std;

int main()
{
//    int[4]*ptr;
    int (*ptre)[4];
    int **m;
    m=new int*[5];
    int i , j;
    for(i =0;i<5;i++)
    {
        m[i]=new int;
    }
    for(i=0;i<5;i++)
        for(j=0;j<3;j++)
        m[i][j]=2;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
            cout<<m[i][j];
    cout<<endl;
    }

    return 0;
}
