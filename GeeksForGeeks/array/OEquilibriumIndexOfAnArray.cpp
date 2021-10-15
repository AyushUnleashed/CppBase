///https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays
// done o(n);
//using similar to kadane

#include<iostream>
#include<conio.h>
using namespace std;

int findEquilibrium(int A[], int n)
{   
    int retIndex =-1;

    int totalSum=0;

    for(int i=0;i<n;i++)
    {
        totalSum+=A[i];
    }
    int sumL=0;
    int sumR=totalSum-A[0];

    for(int i=1;i<=n-2;i++)
    {
        sumL+=A[i-1];
        sumR-=A[i];

        if(sumL==sumR)
        {
            retIndex=i;
            break;
        }
    }
    return retIndex;
}


int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int index =findEquilibrium(arr,n);

    cout<<"Index of Equilibrium:"<<index;
    return 0;
}