#include<iostream>
#include<conio.h>
using namespace std;


class abc
{
    public:
    void fun();//member function of class abc
};//clas defination closed

void abc::fun()
{
    cout<<"Ghanesh Choubey";
}

int main()
{
    abc ob;
    ob.fun();//member function fun called
}