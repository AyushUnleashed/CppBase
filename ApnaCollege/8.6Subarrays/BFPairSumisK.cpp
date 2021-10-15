#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int k,n,sum=0,firstIndex=-1,secondIndex=-1;
    cin>>n;
    int arr[n];
    bool exist=false;
    //input array
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>k;
    for(int i=0;i<n;i++)
    {   
        
        for(int j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum==k)
            {
                exist=true;
                firstIndex=i;
                secondIndex=j;
                break;
            }
        }

        if(exist==true)
        {
            break;
        }
    }

    if(exist==true)
    {
        cout<<"\nIt exist "<<arr[firstIndex]<<" + "<<arr[secondIndex]<<"=>"<<k;
    }else{cout<<"\nSorry bro it doesn't";}
    
}