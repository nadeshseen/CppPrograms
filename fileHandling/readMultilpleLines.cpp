#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char str[80];
    int i;
    {
        i=10;
        cout<<i;
    }
    cout<<i;
    ifstream fin("temp1.txt");
    if(!fin)
    {
        cout<<"Error";
        return -1;
    }
    cout<<"Contents of file.... \n";
    while(fin.eof()==0)
    {
        fin.getline(str,80);
        cout<< str<<endl;
    }

    return 0;
}
