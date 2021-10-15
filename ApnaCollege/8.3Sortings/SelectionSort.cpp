#include<iostream>
#include<conio.h>
#include<limits.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout<<"Enter no. of Elements:";
    cin>>n;
    int array[n];
    cout<<"\nEnter array elements:";
    
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    //Sorting of Array;
    for(int i=0;i<n-1;i++)
    {   
        for(int j=i+1;j<n;j++)
        {
            if(array[j]<array[i])
            {   
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }

    cout<<"\nSorted Array is:";

     for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}