// LECT 8 V12
#include<stdio.h>
#include<iostream>
using namespace std;

int linearSearch(int arr[],int n) 
{
    int num;
    cout<<"\nEnter the number you want to search\n";
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(num==arr[i])
        {
            cout<<"Index is=";
            return i;
        }   
    }
    cout<<"No such Element\n";
    return -1;
}
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter Element "<<i+1<<" :"<<endl;
        cin>>arr[i];
    }
    cout<<linearSearch(arr,5);
    return 0;
}