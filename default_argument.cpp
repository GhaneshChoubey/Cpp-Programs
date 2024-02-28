#include<iostream>
#include<conio.h>
using namespace std;

int sum(int,int=0,int=0);
int main()
{
    int a,b,c;
    cout<<"Enter two numbers:-";
    cin>>a>>b;
    cout<<"Sum is:-"<<sum(a,b);

    cout<<"\nEnter three numbers:-";
    cin>>a>>b>>c;
    cout<<"Sum is:-"<<sum(a,b,c);
    return 0;
}

int sum(int x,int y,int z)
{
    return(x+y+z);
}