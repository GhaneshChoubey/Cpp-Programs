#include<iostream>
#include<conio.h>
using namespace std;


class abc
{
    private:
    int x;      //member data of class abc is x
    public:
    void fun()  //member function of class abc is fun
    {
        x=10;
        cout<<x;
    }     
    
};



int main()
{
    
    abc ob;     //ob is the object of the class
    ob.fun();   //member function of class abc is calles using object ob of class abc
    return 0;
}