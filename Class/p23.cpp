 #include<iostream>
using namespace std;
class classB;
class classC;

class classA{
    int x=1;
public:

    friend void input(classA & ,classB &,classC&);
    friend void output(classA,classB,classC);
};

class classB{
    int y;
public:
    friend void input(classA & ,classB &,classC&);
    friend void output(classA,classB,classC);
};

class classC{
    int z;
public:
    friend void input(classA & ,classB &,classC&);
    friend void output(classA,classB,classC);
};
void input(classA &p,classB &b,classC &c){
    cout<<"Enter three numbers ";
    cin>>p.x>>b.y>>c.z;
    cout<<p.x<<b.y;
}
void output(classA p,classB b,classC c){
    cout<<"\nClass A data member = "<<p.x<<"\nClass B data member = "<<b.y<<"\nClass C data member = "<<c.z;
}
int main(){
    classA x;classB y;classC z;
    input(x,y,z);
    output(x,y,z);
    return 0;
}
