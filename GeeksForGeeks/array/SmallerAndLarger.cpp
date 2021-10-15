#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

vector<int> getMoreAndLess(int arr[], int n, int x) 
{
    int lowCount=0;
    int bigCount=0;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            bigCount++;
        }
        if(arr[i]<=x)
        {
            lowCount++;
        }
    }
    ans = {lowCount,bigCount};
    // cout<<"\nlowCount:"<<lowCount;
    // cout<<"\nbigCount:"<<bigCount;
    return ans;
}

int main()
{
    system("cls");
    int n;int x;
    cin>>n;
    cin>>x;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> v = getMoreAndLess(arr,n,x);

    cout<<"\nLower than "<<x<<" "<<v[0];
    cout<<"\nBigger than "<<x<<" "<<v[1];

    return 0;
}