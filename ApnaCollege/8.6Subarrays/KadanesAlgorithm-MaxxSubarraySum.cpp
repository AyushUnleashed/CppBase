#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
//Kadane's Algorithm solution for maximum sum of contiguous subarray //O(n)

//traverse array add elements to currSum 
// if currSum is -ve that means that subarray will reduce sum, so we don't use it by setting currSum=0
//if currSum >maximum we set it to maximum 

//for reference watch anuj bhaiya's video

int main()
{
    system("cls");
    int currSum=0,maxSum=INT32_MIN,n;
    cin>>n;
    int arr[n];
    //input array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //code to solve 
cout<<"\ncurrSum:";
    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];

        if(currSum>maxSum)
        {
            maxSum=currSum;
        }
        //because we are setting currSum=0 after assigning maxSum that's why maxSum will not get zero in case of all negative values
        if(currSum<0)
        {
            currSum=0;
        }

    }

    cout<<"\nMaximum sum is:"<<maxSum;
    return 0;

}