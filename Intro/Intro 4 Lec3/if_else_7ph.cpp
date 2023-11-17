// 4 Lect3 P7
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a=10,b=20,c=30;
    
    if(a<=b && !b)      // !b becomes f-a-l-s-e
    {
        cout<<"Hello";
    }
    else if (c>=a&&c>=b)
    {
        cout<<"Hi";
    }
    else
    {
        cout<<"Hey";
    }
    return 0;
}