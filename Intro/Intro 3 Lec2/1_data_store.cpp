// Intro L3 V12
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    char c;
    a=100;
    c=100;
    cout<<"a=100, c="<<c<<endl;

    a=19110;
    c=a;
    cout<<"a="<<a<<"  ";
    cout<<"now c="<<c<<endl<<endl;
    cout<<"In last case a=19110 is more than 1bytes and char is only";
    cout<<"\n one byte so 'c' will store only last number and in max cases it shows question marks?";

    cout<<"\n\n**********\nSimilarly lets try typeCasting by passing value of char to int\n";
    char x='y';
    int b=x;
    cout<<"\nValue of b="<<b;

    return 0;
}
