#include<iostream>
using namespace std;
class data{
    int rollNumber;
    char name[10];
    float marks;
public:
    void getData();
    void putData();
};
void inputData(char x[],int r,float m){
    name = x;
    rollNumber = r;
    marks = m;
}
void outputData(){
    cout<<"Name : "<<name;
    cout<<"Roll Number : "<<rollNumber;
    cout<<"Marks : "<<marks;
}
int size = 10;
data stud[size];
int main(){

    return 0;
}
