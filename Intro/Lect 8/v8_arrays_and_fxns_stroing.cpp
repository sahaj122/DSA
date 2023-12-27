// Lect 8 v8
#include<iostream>
#include<stdio.h>
using namespace std;

void printArray(int arr[])
{
    cout<<"Fxn shows sizeof of passed array="<<sizeof(arr)<<endl;
    cout<<"\n it should be 8\n";
    cout<<arr<<endl;
    cout<<"Inside the function arr[0]="<<arr[0];
    arr[0]=11;
}
int main()
{
    int az[5]={1,2,3,4,5};
    cout<<"Adress of az[0]="<<az<<"\n**********\n"; // Gives memory address of az[0]
             
    int input[100];
    input[0]=0;
    input[1]=1;
    input[2]=2;
    cout<<"sizeof input array="<<sizeof(input)<<endl;
                   
    cout<<"Address of input[0]="<<input<<endl;
    printArray(input);
    cout<<"\nAfter calling fxn input[0]="<<input[0];
                     
    int *n;
    cout<<"\n n= "<<sizeof(n);
    return 0;
}