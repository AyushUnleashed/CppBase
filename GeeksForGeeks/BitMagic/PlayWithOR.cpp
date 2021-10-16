#include<iostream>
#include<conio.h>
using namespace std;

int* game_with_number(int arr[], int n)
{
    int brr[n];
    for(int i=0;i<=n-2;i++)
    {
        brr[i]=(arr[i] | arr[i+1]);
    }
    brr[n-1]=arr[n-1];
    return brr;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int *arr1 = game_with_number(arr,n);

    cout<<"\nModified array is:";

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i];
    }
    return  0;
}