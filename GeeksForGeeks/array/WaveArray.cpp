#include<iostream>
#include<conio.h>
using namespace std;
//given a sorted array
void convertToWave(int *arr, int n)
{
    for(int i=0;i<n;i+=2)
    {   
        if(n%2!=0 && i==n-1)
        {
            break;
        }
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1] = temp;
    }
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
    convertToWave(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}