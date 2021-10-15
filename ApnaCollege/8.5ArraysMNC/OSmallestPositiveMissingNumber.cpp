#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,ans=-1;
    
    cin>>n;
    int arr[n];
    bool checkarr[n];

    //initialising checkarray as false;
    for(int i=0;i<n;i++)
    {
        checkarr[i]=false;
    }

   //Input Array 
    cout<<"Enter array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }

    //code to solve problem

    // if element is +ve and it exist turn it to true in check array
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            checkarr[arr[i]]=true;
        }
    }

//if from 1 to n any of the element is not present than as soon as the first is encountered it returns 
    for(int i=1;i<=n;i++)
    {
        if(checkarr[i]==false)
        {
            cout<<"Ans is "<<i;
            return 0;
        }
    }

}