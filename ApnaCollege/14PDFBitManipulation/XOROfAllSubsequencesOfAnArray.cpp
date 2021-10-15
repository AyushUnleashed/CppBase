#include<iostream>
#include<conio.h>
using namespace std;

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