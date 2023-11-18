// L6 P9
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    for(int i=0;i<5;i=i+1)
    {
        cout<<i<<" ";
    }
    cout<<"\n***********\n";
    for(int i=0;i<5;i=i+1)
    {
        cout<<i<<" ";
        i = i + 1;
    }
    return 0;
}