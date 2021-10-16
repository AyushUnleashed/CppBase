#include<iostream>
#include<conio.h>
using namespace std;

void swap(int,int);

int main()
{   int a,b;
    cout<<"Enter no:";
    cin>>a>>b;
    cout<<endl<<"a"<<a;
    cout<<endl<<"b"<<b;
    swap(a,b);
}

void swap(int b,int a)
{
    cout<<endl<<"a"<<a;
    cout<<endl<<"b"<<b;
}