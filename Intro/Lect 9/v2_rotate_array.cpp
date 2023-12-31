// Lect9 Assign 13 V2 Rotate Array 
#include<iostream>
#include<stdio.h>
using namespace std;

void rotateArray1(int arr[],int n,int d)
{
    while(d>0)
    {
        cout<<"check"<<endl;
        int temp0;
        int i=0;
        temp0 = arr[0];
        for(i=0;i<n-1;i++)
        {
            cout<<i<<" ";
            arr[i] = arr[i+1];

        }
        arr[i]=temp0;
        d--;
        cout<<endl;
    }
}
void rotateArray2(int arr[],int n,int d)
{
    // int arrCopy[4];
    int *arrCopy = new int[d];
    for(int i=0;i<d;i++)
    {
        arrCopy[i] = arr[i];
    }
    int i;
    for(i=0;i<n-d;i++)
    {
        arr[i] = arr[i+d];
    }
    cout<<"\ni="<<i<<endl;
    int j=0;
    while(d>0)
    {
        arr[i] = arrCopy[j];
        i++;
        j++;
        d--;
    }
}
void rotateArray3(int arr[],int n,int d)
{
    for(int i=0,j=n-1;i<n/2;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=0,j=n-1-d;i<(n-d)/2;i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for(int i=n-d,j=n-1;i<(2*n-d)/2;j--,i++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[7]={2,6,3,1,5,9,8};
    int d;
    cout<<"Enter rotation factor\n";
    cin>>d;
    // rotateArray1(arr,7,d);
    // printArray(arr,7);

    rotateArray2(arr,7,d);
    printArray(arr,7);

    // rotateArray3(arr,7,d);
    // printArray(arr,7);
  
    return 0;
}
