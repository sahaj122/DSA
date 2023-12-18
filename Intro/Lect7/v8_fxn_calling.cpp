// How fxns are called
#include<iostream>      
#include<stdio.h>           
using namespace std;
void B()
{
    cout<<"5"<<endl;
}
void A()
{
    cout<<"1"<<endl;
    B();
    cout<<"2"<<endl;
}

int main()
{
    cout<<3<<endl;
    A();
    cout<<4<<endl;
}