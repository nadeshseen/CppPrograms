#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char *name1;
    name1 = new char;
    cout<<"Enter name  1  : ";
    cin>>name1;
    char *n2;
    n2 = new char;
    cout<<"Enter name 2 : ";
    cin>>n2;
    int n;
    cout<<"Enter where you want to replace ? ";
    cin>> n;
    int i,j;
    char *temp;
    temp = new char;
    for(i=0;i<n;i++)
    {
        temp[i]=name1[i];
    }
    for(i=0;i<strlen(n2);i++)
    {
        temp[n+i]=n2[i];
    }
    for(i=0;i<strlen(name1)-n;i++)
    {
        temp[strlen(n2)+i+n]=name1[n+i];
    }
    cout<<temp;
    return 0;



}
