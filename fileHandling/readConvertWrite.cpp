#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fin("abc.txt");
    if(!fin)
    {
        cout<<"Error";
        return -1;
    }
    ofstream fout("xyz.txt");
    while(fin.eof()==0)
    {
        fin.get(ch);
        fout.put(toupper(ch));
    }

    return 0;
}
