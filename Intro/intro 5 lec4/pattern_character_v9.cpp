// Lect4 V9
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the Number\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            char ch='A' + j -1;
            cout<<ch<<" ";
            j++;
        }
            cout<<endl;
            i++;

    }
    cout<<"\n****Ques 2 Same Video\n";
    i=1;
    while(i<=n)
    {
        int j=0;
        while(j<n)
        {
            char ch='A' + i + j -1 ; 
            cout<<ch<<" ";
            j++;

        }
        i++;
        cout<<endl;

    }

    cout<<"\n$$$2nd Approach$$$\n";
    i=1;
    while(i<=n)
    {
        int j=1;
        char start = 'A'+i-1;
        while(j<=n)
        {
            char ch=start+j -1 ; 
            cout<<ch<<" ";
            j++;

        }
        i++;
        cout<<endl;

    }
   
    return 0;
}