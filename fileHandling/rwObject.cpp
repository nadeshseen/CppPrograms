#include<iostream>
#include<fstream>
using namespace std;
class student
{

private:
    int rollno;
    char name[20];
    int marks;
public:
    void read()
    {
        cout<<"Inter Student Information ";
        cin>>rollno>>name>>marks;
    }
    void show()
    {
        cout<<"Rollnumber = "<<rollno;
        cout<<"\nName = "<<name;
        cout<<"\nMarks ="<<marks;
    }
};
int main()
{
    student s1;
    s1.read();
    ofstream out1("stud.txt",ios::binary);
    out1.write((char *)&s1,sizeof(s1));
    out1.close();
    ifstream in1("stud.txt",ios::binary);
    in1.read((char * )&s1,sizeof(s1));
    cout<<"Displaying student object retrieved from file"<<endl;
    s1.show();
    return 0;
}
