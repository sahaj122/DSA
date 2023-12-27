#include<iostream>      
#include<stdio.h> 
#include<climits>          
using namespace std;
int main()
{
    int arr[5];

    cout<<"Enter any 5 numbers\n";
    for(int i=0;i<5;i++ )
    {
        cin>>arr[i];
    }

    int max = INT_MIN; //--> error
    cout<<max<<endl;
    // int max = arr[0];
    for(int i=0;i<5;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    cout<<"Greatest Element = "<<max;

    return 0;
}