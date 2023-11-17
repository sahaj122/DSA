// Intro 4 Lect3 V10
// Prime number using while loop
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check its prime or not\n";
    cin>>n;
    int i=2;
    int flag=0;
    while(i<n)
    {
        if(n%i==0)
        {
            flag++;
        }
        i++;
    }
    if(n==1)
    {
        cout<<"Composite hai!!!";
    }
    else if(!flag)
    {
        cout<<"Prime hai!!!";
    }
    else
    {
        cout<<"Not a prime";
    }
    return 0;
}