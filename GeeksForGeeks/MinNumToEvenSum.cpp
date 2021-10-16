// https://practice.geeksforgeeks.org/problems/minimum-number-to-form-the-sum-even0326/1/?category[]=Arrays&category[]=Arrays&page=1&query=category[]Arrayspage1category[]Arrays

#include<iostream>
#include<conio.h>
using namespace std;

int minNum(long long int arr[],int n)
{   int sum=0;int ans=-1;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    if(sum%2==0)
    {
        ans=2;
    }
    else
    {
        ans=1;
    }

    return ans;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    long long arr[n];
    int ans;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=minNum(arr,n);
    // cout<<"\nSum :"<<sum;
     cout<<"\nWe need to add atleast "<<ans<<" to make sum even";

}

	