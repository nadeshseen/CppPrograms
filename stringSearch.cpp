#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char name[100]="My name is Nadesh Seen";
    cout<<"Enter the string you want to find ? ";
    char *n;
    n=new char[20];

    cin>>n;
    int j,k;

        for(k=0,j=0 ; name[k]!='\0' && n[j]!='\0' ; k++)
        {
            if(name[k]==n[j])
            {
                j++;
            }
            else
                j=0;

        }

        if(j!=0)
            cout<<"Found at "<<k-j+1;
        else
            cout<<"not found";
    return 0;
}
