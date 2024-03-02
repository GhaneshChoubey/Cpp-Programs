#include<iostream>
#include<conio.h>
using namespace std;

int area(int,int);
float area(int);
int main()
{
    int r;
    cout<<"Enter radius of a circle:-";
    cin>>r;
    float A=area(r);
    cout<<"\n Area of circle is :-"<<A;
    int l,b,a;
    cout<<"\n Enter length and breadth of rectangle:-";
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is:-"<<a;
    return 0;
}

float area(int R)
{
    return(3.14*R*R);
}
int area(int L,int B)
{
    return (L*B);
}