#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//max from arr1
//min from arr2
int main()
{
    system("cls");
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    int minNum=INT32_MAX;
    int maxNum=INT32_MIN;
    int product=1;

    cout<<"\nEnter 1st array:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    cout<<"\nEnter 2ndarray:\n";
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    for(int i=0;i<n;i++)
    {
       maxNum=max(maxNum,arr1[i]);
    }

    for(int i=0;i<m;i++)
    {
       minNum=min(minNum,arr2[i]);
    }

    product=minNum*maxNum;

    cout<<"\nProduct of \nmax: "<<maxNum<<"from 1st array \nmin: "<<minNum<<" from 2nd array \nis "<<product;
    return 0;
}