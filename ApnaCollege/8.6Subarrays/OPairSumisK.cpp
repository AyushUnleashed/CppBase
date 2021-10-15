//Day 064

// In future we will change sorting algorithm to one with lower time complexity then it will be optimised better
#include<iostream>
#include<conio.h>
using namespace std;

bool pairSum(int[],int,int);
int main()
{
    system("cls");
    int k,n,sum=0;//firstIndex=-1,secondIndex=-1;
    cin>>n;
    int arr[n];
    bool exist=false;
    //input array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>k;
    //insertion sort

     for(int i=1;i<n;i++)
    {   
        int current=arr[i];
        int j=i-1;  //current se pehle wala unsorted hai 

        //j>=0 kyunki uske pehle elements nhi h
        while(arr[j]>current && j>=0) //unsorted elemnets ko aage shift krte jaao jab tak bade ho
        {
            arr[j+1]=arr[j];
            j--;    //unsorted arrray ke dusre element ko check karne 
        }
        arr[j+1]=current; //j+1 kyunki j-- bad me likha h toh 0th ke time pe j-- ke bad j=-1 hoga but place toh j=0 pe krna hoga na
    }

    //function call
    exist=pairSum(arr,n,k);

 
    if(exist==true)
    {
        cout<<"\nIt exist ";
    }else{cout<<"\nSorry bro it doesn't";}
    
}

bool pairSum(int arr[],int n,int k)
{
    int high=n-1,low=0,sum=0;

    while(low<high)
    {
        sum=arr[high]+arr[low];
        if(sum==k)
        {
            cout<<endl<<arr[high]<<" + "<<arr[low]<<" =>"<<k;
            return true;
        }
        if(sum<k)
        {
            low++;
        }
        if(sum>k)
        {
            high--;
        }
    }

    return false;
}