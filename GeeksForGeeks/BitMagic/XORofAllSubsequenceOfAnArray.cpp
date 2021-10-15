#include<iostream>
#include<conio.h>
using namespace std;

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
    int xorSum=0;

    if(n==1)
    {
        xorSum=arr[0];
    }
    else{
        xorSum=0;
    }

    cout<<"XorSum:"<<xorSum;
}