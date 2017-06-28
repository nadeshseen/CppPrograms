#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int rollno;
    char name[20];
    int marks;
    ifstream inp_file("stud.txt");
    if(!inp_file)
    {
        cout<<"File cannot open correctly";
        return -1;
    }
    cout<<"Reading student details from a file " << endl;
    inp_file>>rollno;
    inp_file>>name;
    inp_file>>marks;
    cout<<"Contents of file are : "<<endl;
    cout<<"Roll No : "<<rollno<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Marks : "<<marks<<endl;
    return 0;
}
