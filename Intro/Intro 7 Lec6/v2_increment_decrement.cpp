// Lect6 V2
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a= 5 ;
    int c = a++;

    cout<<"c="<<c<<endl;
    cout<<"a="<<a;

    cout<<"\n*****\n usually In precedence associativity is from left to right but in some cases like in case of \n increment and decreement we go from right to left";
    
    return 0;
}