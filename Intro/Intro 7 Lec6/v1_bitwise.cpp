//  << --> padding is with 0
//  >> --> +ve number padding with 0; -ve number padding with x (x=0,1), x depends on compiler
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int ror  = 15 | 30;
    int rand = 15 & 30;
    int rnot = ~30;
    int rxor = 15 ^ 30;
    int rls  = 15 << 2; 
    int rrs  = 15 >> 2;

    cout<<ror<<endl;
    cout<<rand<<endl;
    cout<<rnot<<endl;
    cout<<rxor<<endl;
    cout<<rls<<endl;
    cout<<rrs<<endl; 


    return 0;
}