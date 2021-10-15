#include<iostream>
#include<conio.h>
using namespace std;
//Strictly Increasing
bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArray = sorted(arr+1,n-1);
    if(arr[0]<arr[1] & restArray)
    {
        return true;
    }

    return false;
}

int main()
{
    system("cls");int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    if(sorted(arr,n)==true)
    {
        cout<<"Whole Array is Sorted";
    }
    else
    {
        cout<<"Array is not Sorted";
    }
    return 0;
}