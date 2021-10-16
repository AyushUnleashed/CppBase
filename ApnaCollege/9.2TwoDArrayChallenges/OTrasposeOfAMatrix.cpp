//2nd Solution without using another 2d array

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n][n],transArr[n][n];
    
    //Give Input

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }


    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
            
        }
    }


    cout<<"\nTranspose is:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;     
    }
    return 0;
}

