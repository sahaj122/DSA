// Lect 8 V14
#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int arr1[]  ={1,2,3};
    int arr2[3] ={1,2,3};
    int arr3[6] ={1,2,3};
    int arr4[6]={0};
    int arr5[6] ={};

    cout<<"Printing arr1[]\n";
    for(int i=0;i<10;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    cout<<" Prinitng arr3[6]={1,2,3} \n";
    for(int i=0;i<6;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<"\n\nPrinting arr4[6]={0}"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr4[i]<<" ";
    }
    cout<<"\n\nPrinting arr5[6] ={} "<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr5[i]<<" ";
    }
}