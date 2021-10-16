#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

long long maxArea(long long A[], int len)
{
    long long water=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            long long tempWater = min(A[i],A[j]) * (j-i);
            water = max(water,tempWater);
        }        
    }
    return water;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    long long arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    long long water = maxArea(arr,n);
    cout<<endl<<"water:"<<water;
    return 0;    
}