#include<iostream>
#include<conio.h>
using namespace std;

int gameOfXor(int N , int A[]) 
{
    int xorSum=0;

    for(int i=0;i<N;i++)
    {
        if(N%2==0)  //even number
        {   //by observation its always zero
            xorSum=0;
        }
        else    //odd number
        {
            if((i%2) == 0) //has odd times same element at even index
            {
                xorSum^=A[i];
            }
        }
    }
    return xorSum;
}

int main()
{
    system("cls");
    int xorSum=0;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    xorSum=gameOfXor(n,arr);

    //since when i=even all elements from all subsequences will cancel each other

    cout<<"XorSum of all subarray is:"<<xorSum;
}
