// Lect 2 V18
// Operators
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int f;
    int ans;
    // double/int = double
    // float /int = float

    // float xy = 9.0;
    // cout<<xy%3;
    
    cout<<"% cannot be used with double and float\n\n";
    cout<<"Enter the value in Farahnite\n";
    cin>>f;

    // cout<<6.0%2; 

    cout<<"Temprature in celsius="<<(5.0/9)*(f-32);
    ans = (5.0/9)*(f-32);
    cout<<"\nAgar int mae store kare, then ans="<<ans;
    cout<<"\n*********************\n";

    int x,y;
    cout<<"Enter x and y:\n";
    cin>>x>>y;
    bool isEqual = (x==y);
    bool isAGreater = (x>y);
    bool isALess = (x<y);

    cout<<"Are They Equal "<<isEqual<<endl;
    cout<<"is A greater "<<isAGreater<<endl;
    cout<<"is A Less "<<isALess<<endl;
    return 0;
}