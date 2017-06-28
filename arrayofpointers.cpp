#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    //kapil.rathee71
    //hardikm003

    int *ptr[4];
    int i;
    for(i=0;i<4;i++)
        ptr[i] = new int[10];
       // ptr[i] = (int*)malloc(10);

    for(i=0;i<4;i++)
    {
        *ptr[i]=i;
    }
    for(i=0;i<4;i++)
    {
        cout<<*ptr[i]<<endl;
    }
    return 0;
}
