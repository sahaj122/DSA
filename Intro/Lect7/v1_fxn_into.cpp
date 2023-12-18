#include<iostream>          // 1. Code is less bulky
#include<stdio.h>           // 2. Less Debugging
using namespace std;        // 3. Readability

int fact(int n)
{
    int ans=1;
    int i = 1;
    while(i<=n)
    {
        ans = ans * i;
        i++;
    }
    return ans;
}
bool prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
}

void print(int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n,r;
    cout<<"Enter n\n";
    cin>>n;
    cout<<"Enter r\n";
    cin>>r;

    cout<<"Factorial="<<fact(n)/(fact(r)*fact(n-r));

    cout<<"\n**** QUES 2 SAME VIDEO ***\n";
    
    cout<<"Enter to check prime\n";
    cin>>n;
    if(prime(n))
    {
        cout<<"Prime hai";
    }
    else
    cout<<"Not a prime";

    cout<<"\n%%%%%%% VOID FXN %%%%%%%%\n";
    cout<<"Enter number\n";
    cin>>n;
    print(n);



    return 0;
}