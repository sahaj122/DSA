// Lect8 Reverse Array
#include<iostream>
#include<stdio.h>
using namespace std;

void reverse(int arr[],int n)
{
    int i=0;
    int j=n-1;

    while(i<j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};

    reverse(arr,5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}