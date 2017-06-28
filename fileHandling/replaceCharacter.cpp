#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char c,ch,newch;
    fstream finout("abc.txt",ios::in|ios::out);
    if(!finout)
    {
        cout<<"Error!";
        return -1;
    }
    cout<<"Enter character to be replaced = ";
    cin>>ch;
    cout<<"Enter new character to insert = ";
    cin>>newch;
    while(finout.eof()==0)
    {
        finout.get(c);
        if(ch==c)
        {
            finout.seekg(-1,ios::cur);
            finout.put(newch);
        }
    }
    return 0;
}
