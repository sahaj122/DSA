// Lect4 V2
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<"*"<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}