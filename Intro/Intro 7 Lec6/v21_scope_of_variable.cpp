// Scope Of Variable
// L6 V21

#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i = 10 ;
    cout<<"1. i="<<i<<endl;
    
    if(i==10)
    {
        int i=22;
        cout<<"2. Inside if i="<<i<<endl;
    }

    cout<<"3. i="<<i<<endl;


    return 0;
}