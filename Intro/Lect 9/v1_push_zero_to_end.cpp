// Lect9 Assignment13 V1 
// Shift Zeros to the  end
#include<iostream>
#include<stdio.h>
using namespace std;

void shiftZero2(int arr[],int n)
{
    int i=0;
    int j=n-1;
    cout<<"Using Fxn shiftZero2\n";
    while(i<j)
    {
        if(arr[i]!=0)
        {
            i++;
        }
        else if(arr[j]==0)
        {
            j--;
        }
        else 
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}

int main()
{
    int arr[9] = {2,6,0,0,1,9,0,8,0};
    int k = 0;
    shiftZero2(arr,9);
    /*
    for(int i=0;i<9;i++)
    {
        if(arr[i]!=0)
        {
            arr[k++] = arr[i];
            if(i>k)
            {
                arr[i]=0;
            }
        }
    
    }
    */
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}