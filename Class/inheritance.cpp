#include<iostream>
using namespace std;

class base
{
private:
    int priv_base;
protected:
    int prot_base;
public:
    int pub_base;
    int get_base_priv(){
        priv_base=10;
        return priv_base;
    }
};
class derive:private base
{
private:
    int priv_der;
protected:
    int prot_der;
public:
    int pub_der;
    void f1()
    {
        int x;

        x=priv_der;
        x=pub_base;
        x=pub_der;
        x=prot_der;
        x = get_base_priv();
        cout<<"Value of base's private data member = "<<x;
        prot_base = 20;
        cout<<"\nValue of base's protected data member = "<<prot_base;
    }
};
int main()
{
    derive d;
    int y ;
    base b;
    base::pub_base=10;
    y = base::get_base_priv();
    d.f1();
    y=d.get_base_priv();
    cout <<"/Value of base private data member accessed indeirectly = "<<y;
    y=d.pub_base;

}
