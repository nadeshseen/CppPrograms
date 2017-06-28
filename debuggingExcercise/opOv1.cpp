#include<iostream>
using namespace std;
class Space
{
    int mCount;
public:
    Space()
    {
        mCount=0;
    }
    Space operator ++(int)
    {
        Space t;
        t.mCount++;
        return t;
    }

};
int main()
{
    Space asdf;
    asdf++;
    return 0;
}
