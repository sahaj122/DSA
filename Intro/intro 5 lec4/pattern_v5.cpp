// Lect4 v5
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
        while(j<=i)
        {
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    cout<<"\n****Ques 2 Same Video****\n";
    i=1;
    while(i<=n)
    {
        int j=i;
        int k=1;
        while(k<=i)
        {
            cout<<j<<" ";
            j++;
            k++;
        }
        i++;
        cout<<endl;
    }


    cout<<"\n****Ques 3 Same Video****\n";
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
        cout<<endl;
        i++;
    }

    return 0;
}