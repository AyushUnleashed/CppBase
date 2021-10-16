#include<iostream>
#include<conio.h>
using namespace std;

int maxDays(int[],int);


int multiply(int[], int);
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

    cout<<"\nmaxDays:"<<maxDays(arr,n);
}  

int maxDays(int arr[],int n)
{
    int maxNum = INT32_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxNum)
        {
            maxNum=arr[i];
        }
    }

    return maxNum;
}

