// L6 P6 & P7
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int x=10;
    int y=20;

    if(x++>10 && ++y > 20)
    {
        cout<<"Inside if";
    }
    else
    {
        cout<<"Inside else\n";
    }
    cout<<x<<" "<<y;

    int a=10;
    int b=20;
    
    cout<<"\n***** P7 *****\n";

    if(a++>10 || b++>20)
    {
        cout<<"Inside if";
    }
    else
    {
        cout<<"Inside else\n";
    }
    cout<<a<<" "<<b;
    return 0;
}