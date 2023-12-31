// Lect 9 v9 
// Given two sorted array, merge them such that new array is sorted
#include<iostream> 
#include<stdio.h>
using namespace std;

void mergeArray(int arr1[],int arr2[], int n1, int n2,int arr3[])
{
    int j=0,k=0,i=0;
  
        while(j<n1 && k<n2)
        {
            if(arr1[j]>arr2[k])
            {
                arr3[i] = arr2[k];
                k++; 
                i++;
            }
            else 
            {
                arr3[i] = arr1[j];
                j++;
                i++;
            }

        }
        while(j<n1)
        {
            arr3[i++] = arr1[j++];
        }
        while(k<n2)
        {
            arr3[i++] = arr2[k++];
        }
}

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[7] = {2,3,6,8,9,11,22};
    int arr3[12] = {};

    mergeArray(arr1,arr2,5,7,arr3);

    for(int i=0;i<12;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}