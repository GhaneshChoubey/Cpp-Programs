#include<iostream>
#include<conio.h>
using namespace std;

int sum(int *,int *);
int main()
{
    int a=5,b=6;
    int s=sum(&a,&b);
    cout<<"Sum is:-"<<s;
    return 0;
}

int sum(int *p,int *q)
{
    return(*p+*q);
}