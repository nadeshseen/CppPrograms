#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    double x=1257.39;
    int y=345;
    ofstream out1;
    out1.open("def.dat",ios::trunc|ios::binary);
    out1.write((char *)&x,sizeof(x));
    out1.write((char *)&y,sizeof(y));
    out1.close();
    ifstream in1;
    in1.open("def.dat",ios::in|ios::binary);
    x=y=0;
    in1.read((char *)&x,sizeof(x));
    in1.read((char *)&y,sizeof(y));
    cout<<"Contents of the file after reading are...\n";
    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y;
    in1.close();
    return 0;
}
