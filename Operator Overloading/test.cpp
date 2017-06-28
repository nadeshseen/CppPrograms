#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int **arr;

    arr= new int*[3];

    int i,j;

    for(i=0;i<3;i++)
        arr[i] = new int[3];

    for(i = 0 ; i<3 ;i++)
        for(j= 0; j<3 ;j++)
            arr[i][j]=1;
    i=0;j=0;
    for(i = 0 ; i<3 ;i++)
    {
        for(j= 0; j<3 ;j++)
            cout<<arr[i][j]<<setw(5);
        cout<<endl;
    }
    return 0;
}
