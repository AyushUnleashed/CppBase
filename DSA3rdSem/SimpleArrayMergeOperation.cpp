#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m],arr3[n+m];

    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
        arr3[i]=arr1[i];
    }

    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }

    //adding 2nd array to 1st array

    int i=n;
    int j=0;

    while(j<m)
    {
        arr3[i]=arr2[j];
        j++;i++;
    }

    //print array
    for(int i=0;i<n+m;i++)
    {
        cout<<arr3[i];
    }

    return 0;
}