// Lect 9 V3 
// Find Second Largest Element in an Array
#include<stdio.h>
#include<iostream>
using namespace std;

void secondLargest(int arr[],int n)
{
    int large=arr[0];
    int sLarge = -1111;

    for(int i=1;i<n;i++)
    {
        if(large<arr[i])
        {
            sLarge = large;
            large = arr[i];
        }
        else if(sLarge<arr[i])
        {
            sLarge = arr[i];
        }
    }
    // if(sLarge == large) --> wrong try with arr2[3] = {1,2,2};
    // {
    //     cout<<"\nAll Elements are equal\n";
    // }
    else
    {
        cout<<"\nSecond largest element = "<<sLarge;
    }
 
}
int main()
{
    int arr1[7]={3,9,5,1,3,6,2};

    secondLargest(arr1, 7);

    int arr2[3] = {2,2,2};
    secondLargest(arr2,3);

    return 0;
}