#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n; //size of array

    int arr[n],currSum=0,maxSum=INT32_MIN;
    int start=-1,end=-1;    //pointers for printing sub array in last
    //Enter Array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

//code to find maximum subarray

for(int startIndex=0; startIndex<n; startIndex++) //loop to change start index
{   currSum=0;
    for(int endIndex=startIndex; endIndex<n; endIndex++)//loop to change end index, endindex can only be equal or greater than startindex
    {   
        currSum+=arr[endIndex]; //increasing sum everytime endIndex is increased

        //condition to check for maximum sum and then storing their indices 
        if(currSum>maxSum)
        {
            maxSum=currSum;
            start=startIndex;
            end=endIndex;
        }

    }
}

    //code to print subarray with max sum
cout<<"\nMax sum is:"<<maxSum<<endl;

    for(int i=start;i<=end;i++)
    {    
        cout<<arr[i]<<" ";
    }

}