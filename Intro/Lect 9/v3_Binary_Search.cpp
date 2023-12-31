#include<iostream>
#include<stdio.h>
using namespace std;

int binarySearch(int arr[],int n,int x)
{
    int start=0,end=n;
    
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(x>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid - 1;
        }

    }

    return -1;
}


int main()
{
    int n;
    cout<<"Enter the size\n";
    cin>>n;

    int arr[100];
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the value you want to seach for\n";
    int x;
    cin>>x;

    cout<<"Index="<<binarySearch(arr,n,x);
    
    return 0;
}