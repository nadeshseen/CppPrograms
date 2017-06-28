#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin ("abc.txt",ios::in|ios::binary);
    if(!fin)
    {
        cout<<"Error";
        return 0;
    }
    /*ifstream fin ("abc2.txt",ios::trunc|ios::binary);*/
    char ch;
    fin.seekg(5);
    while(fin.eof()==0)
    {

        fin.read((char *)&ch,sizeof(ch));
        cout<<endl<<ch;
    }
   /* while(fin.eof()==0)
    {
        fin.getline(ch,1);
        cout<<ch;
    }
*/    return 0;
}
