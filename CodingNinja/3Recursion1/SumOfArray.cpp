#include<iostream>
#include<conio.h>
using namespace std;

int sumArray(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }

    int smallOutput =sumArray(arr+1,n-1);

    return arr[0]+smallOutput;
}

int main()
{
    int n=5;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sumArray(arr,n);
}