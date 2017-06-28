#include<iostream>

#include<string.h>

using namespace std;
int main()
{
    char str[7]="Nadesh";
    int i,j;
    for(i=0;i<7;i++)
    {
        if(str[i]=='a')
        {
            for(j=i;j<7-i;j++)
            str[j]=str[j+1];
        }
    }
    cout<<str;
    return 0;
}
