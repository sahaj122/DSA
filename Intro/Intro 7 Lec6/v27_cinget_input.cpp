// L6 v27
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int count = 0;
    char ch='1';
    char c;
   
    while(ch!='$')
    {
        cin>>ch;
        count++;
    }
    cout<<endl<<count;
    cout<<endl;
    cout<<"cin ignores all the white space characters like tab, spacebar and even new line character like enter\n";
    cout<<"To get a better control we use cin.get()\n";
    int count2=0;
    while(c!='$')
    {
        c=cin.get();
        count2++;
    }
    cout<<endl;
    cout<<"count2="<<count2<<endl;
    return 0;
}
