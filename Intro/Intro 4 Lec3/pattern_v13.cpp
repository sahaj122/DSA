// into lect3 V10
// 1
// 1 2 
// 1 2 3 
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=1;
    int n;
    cout<<"Enter Number\n";
    cin>>n;
    
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    cout<<"\n******Q2 Same Video*******\n";

    i=1;
    int j=1;
    while(i<=n)
    {
        int k=1;
        while(k<=i)
        {
            cout<<j<<" ";
            k++;
            j++;
        }
        i++;
        cout<<endl;
    }
    cout<<"\n#####Q3 Same Video######\n";
 
    i=1;
    j=1;
    while(i<=n)
    {
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        int line=1;
        while (line<=i)
        {
            cout<<j<<"";
            j++;
            line++;
        }
        cout<<endl;
        i++;
        
    }

    cout<<"\n%%%%Word Doc 16 Ques%%%%"<<endl;
    int x=1;
    while(x<n)
    {
        int k=n-x;

        while(k>0)
        {
            cout<<" ";
            k--;
        }
        int j=1;
        while(j<=2*x-1)
        {
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        x++;
    
    }



    return 0;
}