// Lect 9 Assignment13 V5 
// Sort 0 1 2 in single traversal
#include<stdio.h>
#include<iostream>
using namespace std;


void sort(int arr[], int n)
{
    int i=0,j=n-1;
    for(int l=0;l<n; )
    {
        if(arr[l]==1)
        {
            l++;
        }

        else if(arr[l]==0)
        {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
            i++;
            l++;
        }

        else if(arr[i]==0)
        {
            i++;
            l++;
        }
       
        else if(arr[l]==2 && j>=l && arr[j]!=2)
        {
            int temp = arr[j];
            arr[j] = arr[l];
            arr[l] = temp;
            j--;
            l++;
        }
        else if(arr[j]==2)
        {
            j--;
        }

        else
        {
            l++;
        }
        
    }
}


/*
void sort(int *arr, int size)
{
    int i = 0;
    int l = 0;
    int j = size-1;
    while(l<=j)
    {
        // if element is 0
        if(arr[l] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[l];
            arr[l] = temp;
            i++;
            l++;
        }
        // if element is 1
        if(arr[l] == 1)
        {
            l++;
        }

        // if element is 2
        if(arr[l] == 2)
        {
            int temp = arr[j];
            arr[j] = arr[l];
            arr[l] = temp;
            j--;
            l++;
        }
    }
}
*/

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8]={0,2,2,1,0,1,2,0};

    sort(arr,8);
    printArray(arr,8);

    return 0;
}
