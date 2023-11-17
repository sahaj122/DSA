// Lect4 V4
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number\n";
    cin>>n;
    
    int i=1;
    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {
            cout<<i<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

    cout<<"\n*****Q3 SAME VIDEO*****\n";
    i=1;
    while(i<=n)
    {
        int j=n;
        while(j>0)
        {
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}