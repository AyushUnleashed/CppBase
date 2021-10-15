#include<iostream>
#include<conio.h>
using namespace std;

int transitionPoint(int[], int);
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

    
    cout<<endl<<transitionPoint(arr,n);
    return 0;
}

int transitionPoint(int arr[], int n) {
    int tPoint =-1;

    if(n==1)
    {
        if(arr[0]==1)
        {
            return 0;
            //if 1 at zeroth index
        }
        else if(arr[0]==0)
        {
            return -1;
            //if no one return 0
        }
    }

    if(arr[0]==1)
    {
        return 0;
    }
    
        for(int i=0;i<n-1;i++)
    {
        if(arr[i] == arr[i+1])
        {
            //do nothing
        }
        else
        {   //cout<<"\nIT Works";
            tPoint = i+1;
            break;
        }
    }
    
    return tPoint;
    
}