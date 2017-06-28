#include<iostream>
#include<string.h>
using namespace std;

class first;
class sec;
class conc;
class first{
    char str[10];
public:
    void input();
    friend void add(first,sec);
};
class sec{
    char str[10];
public:
    void input();
    friend void add(first,sec);
};
void first::input(){
    cout<<"Enter string 1 : ";
    cin>>str;
}

void sec::input(){
    cout<<"Enter string 2 : ";
    cin>>str;
}
class conc{
    char str[20];
public:
    friend void add(first,sec);

};

void add(first s1,sec s2) {
    conc s3;
    strcpy(s3.str , strcat(s1.str,s2.str));
    cout<<s3.str;
}
int main(){
    first s1; sec s2;
    s1.input();
    s2.input();
    add(s1,s2);
    return 0;
}
