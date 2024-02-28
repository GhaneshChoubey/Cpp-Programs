#include<iostream>
#include<conio.h>
using namespace std;


int sum(int &,int&);
int main()
{
    int a=5,b=5;
    int s=sum(a,b);
    cout<<"Sum is:-"<<s;
    return 0;
}

int sum(int &x,int &y)
{
    return(x+y);
}
