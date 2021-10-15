#include<conio.h>
#include<iostream>
using namespace std;

//Program for running sum of numsray.

int main()
{   
    system("cls");
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    cout<<"Enter array:\n";
    int nums[n],runningsum[n];
    //to fix code for i=0;
    runningsum[-1]=0;

    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
        runningsum[i]=runningsum[i-1]+nums[i];
    }

    cout<<"\nRunning Sum is:\n";
    
    for(int i=0;i<n;i++)
    {
        cout<<runningsum[i]<<" ";
        
    }
    return 0;
}