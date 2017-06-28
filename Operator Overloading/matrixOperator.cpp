#include<iostream>
#include<iomanip>
using namespace std;
class MAT
{
    int **m,row,column;
    public:
    void create(int ,int);
    friend ifstream & operator >> (istream &,MAT &);
    friend ofstream & operator << (ostream &,MAT &);
    MAT operator + (MAT);
    MAT operator - (MAT);
    MAT operator * (MAT);
};
void MAT::create(int r,int c )
{
    row=r;
    column=c;
    m=new int *[3];
    int i;
    for(i=0;i<3;i++)
            m[i]=new int[3];
}
ifstream & operator >> (istream &din,MAT &a)
{
    int i,j;
    for(i=0;i<a.row;i++)
        for(j=0;j<a.column;j++)
            din>>a.m[i][j];
}
ofstream & operator << (ostream &dout,MAT &a)
{
    int i,j;
    for(i=0;i<a.row;i++)
        {
            for(j=0;j<a.column;j++)
                dout<<setw(5)<<a.m[i][j]<<" ";
            cout<<endl;
        }
}
MAT MAT::operator + (MAT m2)
{
    MAT m3;

    m3.create(3,3);
    int i,j;
    if(row==m2.row&&column==m2.column)
        for(i=0;i<row;i++)
            for(j=0;j<column;j++)
                m3.m[i][j]=m[i][j]+m2.m[i][j];
    else
        cout<<"Not possible";
    return m3;
}
MAT MAT::operator - (MAT m2)
{
    MAT m3;
    m3.create(3,3);
    int i,j;
    if(row==m2.row&&column==m2.column)
        for(i=0;i<row;i++)
            for(j=0;j<column;j++)
                m3.m[i][j]=m[i][j]-m2.m[i][j];
    else
        cout<<"Not possible";
    return m3;
}
MAT MAT::operator * (MAT m2)
{
    MAT m3;
    m3.create(3,3);
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            m3.m[i][j]=0;

        for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                for(int k=0;k<3;k++)
                m3.m[i][k]+=m[i][k]*m2.m[k][j];

    return m3;
}
int main()
{
    MAT m1,m2,m3;
    m1.create(3,3);
    cin>>m1;
    cout<<"Matrix 1:"<<endl<<m1;
    m2.create(3,3);
    cin>>m2;
    cout<<"Matrix 2:"<<endl<<m2;
    m3.create(3,3);
    m3 = m1+m2;
    cout<<"Matrix 3:"<<endl<<m3;
    MAT m4;
    m4.create(3,3);
    m4 = m1-m2;
    cout<<"Matrix 4:"<<endl<<m4;
    MAT m5;
    m5.create(3,3);
    m5 = m1*m2;
    cout<<"Matrix 5:"<<endl<<m5;
    return 0;
}
