#include<iostream>
#include<conio.h>
using namespace std;

int m=10; //global m

int main()
{
    int m=20;  //m redeclared,local to main
    {
        int k=m;
        int m=30; //m declared again,this time,local to inner block
        cout<<"WE ARE IN INNER BLOCK\n";
        cout<<"k="<<k<<"\n";
        cout<<"m="<<m<<"\n";
        cout<<"::m="<<::m<<"\n";
    }

    cout<<"\nWe are in outer block\n";
    cout<<"m="<<m<<"\n";
    cout<<"::m"<<::m<<"\n";
    return 0;
}