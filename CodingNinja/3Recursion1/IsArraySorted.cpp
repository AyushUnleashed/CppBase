#include<iostream>
#include<conio.h>
using namespace std;

bool isSorted(int* arr,int n)
{
    //only onr element or no element means array is sorted
    if(n==1 || n==0)
    {
        return true;
    }
    //if first element bigger than second , means unsorted. 
    if(arr[0]>arr[1]) 
    {
        return false;
    }
    //it reaches here only if arr[0]<arr[1];
    // first 2 element sorted
    bool isSmallerSorted =isSorted(arr+1,n-1);
    
    // array sorting depend on smaller one so..
    // if smaller sorted whole sorted.
    return isSmallerSorted;

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
    cout<<isSorted(arr,n);
}