#include<iostream>
#include<conio.h>
using namespace std;

inline void fun();
int main()
{
    cout<<"You are in main\n";
    fun();
    return 0;
}

void fun()
{
    cout<<"You are in fun";
}