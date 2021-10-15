///https://practice.geeksforgeeks.org/problems/equilibrium-index-of-an-array/1/?category[]=Arrays&category[]=Arrays&difficulty[]=0&page=1&query=category[]Arraysdifficulty[]0page1category[]Arrays
//not done

#include<iostream>
#include<conio.h>
using namespace std;

int findEquilibrium(int A[], int n)
{   
    int retIndex =-1;
    int sumL=0;
    int sumR=0;

    for(int i=1;i<=n-2;i++)
    {   sumL=0;
        sumR=0;
        for(int j=0;j<=i-1;j++)
        {
            sumL+=A[j];
        }

        for(int j=i+1;j<=n-1;j++)
        {
            sumR+=A[j];
        }

        if(sumL==sumR)
        {   cout<<"It Works";
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