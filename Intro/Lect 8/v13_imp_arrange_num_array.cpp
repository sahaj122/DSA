// Lect 8 V13
// Important --> More Research To Be Done 
// Arrange numbers in Array
#include<iostream>
#include<stdio.h>
using namespace std;

void arrange2(int arr[], int n)
{
    cout<<"\n********** 2nd Method ************\n";

    int s=0;
    int e=n-1;
    cout<<"e="<<e<<endl;
    int val = 1;
    int k;
    if(n%2==0)
    {
        k=n/2;
    }
    else
    {
        k=(n+1)/2;
    }
    for(int i=0; i<k ;i++)
    {
        arr[s]=val;
        val++;
        if(n%2!=0 && (n-1)/2==i)        // put n = 1, 3, 5, ...
                                        // (n-1)/2==i of no use ?
        {
            break;
        }
        arr[e]=val;
        val++;
        s++;
        e--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void arrange(int arr[],int n)
{
    int k;
    if(n%2==0)
    {
        k=n;
    }
    else
    {
         k = n-1;
    }
    int j=1;
    for(int i=0;i<n;i++)
    {
        if(n%2==0)
        {
            if(i < n/2)
            {
                arr[i]=j;
                j+=2;
            }
            else
            {
                arr[i]=k;
                k-=2;
            }
        }
        else
        {

            if(i<(n+1)/2)
            {
                arr[i]=j;
                j+=2;
            }
            else
            {
                arr[i]=k;
                k-=2;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}

void arrange3(int arr[], int n)
{
    int j=1;
    int k;

    if(n%2==0)
    {
        k = (n-1)/2;
        
    }
    else
    {
        k = n/2;
    }

    int i=0;
    while(i<=k)
    {
        arr[i] = j;
        j+= 2;
        i++;
    }
    if(n%2==0)
    {
        k=n;
    }
    else
    {
        k=n-1;
    }
    
    while(i<n)
    {
        arr[i]=k;
        k-= 2;
        i++;
    }

    cout<<"\n********3rd Method**********\n";

    for(int m=0;m<n;m++)
    {
        cout<<arr[m]<<" ";
    }

}


int main()
{
    int n;
    int arr[10];
    cout<<"Enter the number\n";
    cin>>n;
    arrange(arr,n);
    arrange2(arr,n);
    arrange3(arr,n);
    return 0;
}