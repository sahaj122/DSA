// Lect9 Assign 13 V6 
// Add two Arrays

//  N O T E:JUST CHECK IT ONCE 


#include<iostream>
#include<stdio.h>
using namespace std;

void addArray(int a1[],int n1,int a2[], int n2, int result[])
{  

    int carry = 0;
    int num;
    int j=n2-1;
    int k=6;
    for(int i=n1-1;i>=0;i--)
    {
        
        if(j>=0)
        {
            num = a1[i] + a2[j] + carry;
            result[k] = num%10;
            k--;
            j--;
        }
        else
        {
            num = a1[i] + carry;
            result[k] = num%10;
            k--;
        }
        carry = num/10;
    }
    result[k] = carry; 
}

void printArray(int result[], int n)
{
    cout<<"Hello"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
}

int main()
{
    int a1[6]={2,9,9,1,3,6};
    int a2[4]={2,0,6,6};
    int result[11];

    addArray(a1,6,a2,4,result);
    printArray(result,7);

    return 0;
}