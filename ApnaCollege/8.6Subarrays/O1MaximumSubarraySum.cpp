//does'nt work

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    //system("cls");
    int n;
    cin>>n;
    int arr[n],sum=0,maxNO=INT32_MIN,startIndex=0;
    //Enter Array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(int i=startIndex;i<n;i++)
    {
        for(int sizeOfSubarray=1;sizeOfSubarray<=n;sizeOfSubarray++)
        {
            if(startIndex+sizeOfSubarray>n)
            break;

            sum=sum+arr[startIndex+sizeOfSubarray-1];
            maxNO=max(sum,maxNO);
        }
    }


cout<<"\nMax sum is:"<<maxNO<<endl;

}