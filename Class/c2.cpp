#include<iostream>
using namespace std;
class sum{
    public:
    int a,b,sum;
    float av;
    void inputData(){
        cout<<"Enter two numbers";
        cin>>a>>b;
        sum = a+b;
        av=sum/2.0;
    }
    void outputData(){
        cout<<"\nSum = "<<sum<<"\nAverage = "<<av;
    }
};
int main(){
    sum s;
    s.inputData();
    s.outputData();
    return 0;
}
