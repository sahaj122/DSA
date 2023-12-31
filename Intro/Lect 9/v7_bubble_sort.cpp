// Lect 9 v7 Bubble Sort
#include<iostream>
#include<stdio.h>
using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main()
{   
    int arr[6]={2,33,7,1,1,22};

    bubbleSort(arr,6);
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}