//Day 064

#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

//Kadane's Algorithm solution for maximum sum of contiguous subarray //O(n)

//traverse array add elements to currSum 
// if currSum is -ve that means that subarray will reduce sum, so we don't use it by setting currSum=0
//if currSum >maximum we set it to maximum 

//for reference watch anuj bhaiya's video

int kadane(int[],int);

int main()
{
    system("cls");
    //Varaible Initialisation
    int currSum=0,total=0;
    int wrapSum=0,nonWrapSum=0,maxSum=0;
    
    int sizeOfArray;
    cin>>sizeOfArray;

    int arr[sizeOfArray];
    
    //input array
    for(int i=0;i<sizeOfArray;i++)
    {
        cin>>arr[i];
        
    }

    //code to solve 
    nonWrapSum=kadane(arr,sizeOfArray);

    //to find total and replace each element to its -ve
    for(int i=0;i<sizeOfArray;i++)
    {
        total+=arr[i];
        arr[i]=-arr[i];
    }

    wrapSum = total -( -kadane(arr,sizeOfArray));

    maxSum=max(wrapSum,nonWrapSum);
   
    cout<<"\nMaximum sum is:"<<maxSum;
    return 0;

}

int kadane(int arr[],int n)
{   
    int currSum=0;
    int maxSum=INT32_MIN;

    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];

        if(currSum>maxSum)
        {
            maxSum=currSum;
        }

        if(currSum<0)
        {
            currSum=0;
        }

    }

    return maxSum;
    
}