// Lect 9 v10 insertion sort
#include<iostream>
#include<stdio.h>
using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current = arr[i];
        int j;
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>current)
            {
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=current;
    }
}

void printArray1(int arr[],int n)
{
    cout<<"\nArray is\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[10];
    int n;
    cout<<"Enter the size\n";
    cin>>n;
    cout<<"Enter the numbers\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    printArray1(arr,n);
    return 0;
}