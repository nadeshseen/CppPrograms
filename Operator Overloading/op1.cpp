#include<iostream>
using namespace std;
class score
{
private:
    char val;
public:
    score()
    {
        val='n';
    }
    void increment()
    {
        val='a';
    }
    char show()
    {
        return (val);
    }
};
int main()
{
    score s1,s2;
    cout<<"\nInitial value of s1 object = "<<s1.show();
    cout<<"\nInitial value of s2 object = "<<s2.show();
    s1.increment();
    s1.increment();
    s2.increment();
    cout<<"\nFinal value of object s1 = "<<s1.show();
    cout<<"\nFinal value of object s2 = "<<s2.show();
}
