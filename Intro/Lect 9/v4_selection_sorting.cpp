// Lect 9 V4 
// Selection Sort
#include<iostream>
#include<stdio.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min = arr[i], minIndex = i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                minIndex= j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    // int start=0;
    // int end=n;
    
    // while(start<end-1)
    // {
    //     cout<<"start="<<start<<" ";
        
    //     for(int i=start;i<n;i++)
    //     {
    //         // int min=arr[i];
    //         if(arr[start]>arr[i])
    //         {
    //             int swap=arr[start];
    //                 arr[start]=arr[i];
    //                 arr[i]=swap;
    //         }

    //     }
    //     start++;
    // }
    cout<<endl<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[100],n;

    cout<<"Enter the size\n";
    cin>>n;
    cout<<"Enter the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    selectionSort(arr,n);


    return 0;
}