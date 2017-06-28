#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;

class Book
{
    // static int successful,unsuccessful;
    char *author[3];
    char *title[3];
    float price[3];
    char *publisher[3];
    int stock[3];
public:
    Book();
    friend int book_search(Book);
    friend void buy(int,Book);
    friend void display(int,Book);
};
//static int successful=0,unsuccessful=0;
Book::Book(){
    int i;
    for(i=0;i<3;i++)
    {
        author[i]= new char[80];
        title[i]=new char[80];
        publisher[i]=new char[80];
    }
    title[0]="object";
    title[1]="ANCI";
    title[2]="electronic";
    author[0]="bala";
    author[1]="guru";
    author[2]="stade";
    publisher[0]=publisher[1]=publisher[2]="MacGrawHill";
    stock[0]=200;
    stock[1]=150;
    stock[2]=50;
    price[0]=120.5;
    price[1]=115.75;
    price[2]=140;
}
int book_search(Book b){
    char auth[80],title[80];
    cout<<"Enter name of author : ";
    gets(auth);
    cout<<"Enter title of Book : ";
    gets(title);
    int i;
    int avail=0;
    for(i=0;i<3;i++)
        if((strcmp(auth,b.author[i])==0)&&(strcmp(title,b.title[i])==0))
            return i;
}
void display(int i,Book b)
{
    cout<<"Author : "<<b.author[i];
    cout<<endl<<"Title : "<<b.title[i];
    cout<<endl<<"Publisher : "<<b.publisher[i];
    cout<<endl<<"Stock Available : "<<b.stock[i];
    cout<<endl<<"Price : "<<b.price[i]<<endl;

}
void buy(int i,Book b)
{
    cout<<"Do you want to buy ? Y/N\n";
    char ans;
    cin>>ans;
    if(ans=='Y'||ans=='y')
    {
        int n;
        cout<<"Enter the amount you want : ";
        cin>>n;
        if(n<=b.stock[i])
        {
            cout<<"You have successfully bought \nTotal Price :"<<b.price[i]*n;
            //successful++
        }
        else{
            cout<<"Stock not available";
            //unsuccessful++
        }
    }

}

int main()
{
    Book b1;
    int value = book_search(b1);
    display(value,b1);
    buy(value,b1);
    return 0 ;
}
