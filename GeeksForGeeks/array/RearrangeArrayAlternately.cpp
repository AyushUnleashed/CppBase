#include<iostream>
#include<conio.h>
using namespace std;

void rearrange(long long *arr, int n) 
{   
    long long brr[n];
    for(int i=0;i<n;i++)
    {
        brr[i]=arr[i];
    }
    int j=0;
    //cout<<endl;
    for(int i=0;( i<n/2 ) && (j<n) ;i++)
    {   
        //cout<<j<<" "<<i<<endl;
        //maximum value
        arr[j] = brr[n-i-1];
        j++; 
        //minimum value
        //cout<<j<<" "<<i<<endl;
        if(j<n)
        {   arr[j] = brr[i];
            j++;
        }
    }    

    if(n%2 != 0)
    {arr[n-1] = brr[n/2];}

       
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    long long arr[n];

    //sorted array of +ve integers
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rearrange(arr,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}