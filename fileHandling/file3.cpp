#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ofstream out1("temp.txt");
    if(!out1)
    {
        cout<<"Error";
        return -1;
    }
    cin.get(ch);
    while(ch!='\n')
    {
        out1.put(ch);
        cin.get(ch);
    }
    return 0;
}

