#include<iostream>
#include<fstream>
#include<unistd.h>
using namespace std;
int main()
{
    int rollno;
    char name[20];
    int marks;
    ofstream outFile("stud.txt");
   /* if(!outFile)
    {
        cerr<<"File cannot open correctly";
        exit(-1);
    }
    */
    cout<<"Enter student details\n";
    cout<<"Enter rollno: ";
    cin>>rollno;
    cout<<"Enter name : ";
    cin>>name;
    cout<<"Enter marks : ";
    cin>>marks;
    cout<<"Writing student details into file...";

    outFile<<rollno<<endl;
    outFile<<name<<endl;
    outFile<<marks<<endl;

    return 0;
}
