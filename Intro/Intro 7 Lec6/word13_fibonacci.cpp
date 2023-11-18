// Fibonaaci L6 W13
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Number\n";
    cin>>n;
    int a=0,b=1;

    for(int i=1;i<=n;i++)
    {
        cout<<a<<" ";
        int temp = a+b;
        a=b;
        b=temp;
    }
    // Printing only the nth number 

    cout<<"\n Printing only the Nth number\n";
    a=0;
    b=1;

    for(int i=1;i<n;i++)
    {
        int temp = a+b;
        a=b;
        b=temp;
    }

    cout<<a;


    return 0;
}