#include<iostream>
#include<string.h>

using namespace std;
int main(){
    char *name[10],dup[20];

    int i;
    cout<<"How many names you want to enter ? ";
    int n;
    cin>>n;
    for(i=0;i<n;i++){
    cout<<"Enter name "<<i+1<<" = ";
    cin>>dup;
    int len = strlen(dup);
    name[i] = new char[len+1];
    strcpy(name[i],dup);

    }
    for(i=0;i<n;i++){
        cout<<name[i]<<endl;
    }
    return 0;
}
