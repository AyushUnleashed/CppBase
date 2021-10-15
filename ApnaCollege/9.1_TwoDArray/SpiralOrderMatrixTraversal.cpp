#include<iostream>
#include<conio.h>
using namespace std;



int main()
{
    system("cls");
    int n,m;
    cout<<"Enter row and column:";
    cin>>n>>m;
    int rowStart=0,rowEnd=n-1;
    int columnStart=0,columnEnd=m-1;
    int arr[n][m];

    //code to input 2d array
    cout<<"\nEnter array:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Spiral Output is:\n";

    //code to print in spiral
    while(rowStart<=rowEnd && columnStart<=columnEnd)
    {
        //increase column
        for(int j=columnStart;j<=columnEnd;j++)
        {
            cout<<arr[rowStart][j]<<" ";
            
        }   
        rowStart++;

        //increase row
        for(int i=rowStart;i<=rowEnd;i++)
        {
            cout<<arr[i][columnEnd]<<" ";
        }
        columnEnd--;

        //decrease column
        for(int j=columnEnd;j>=columnStart;j--)
        {
            cout<<arr[rowEnd][j]<<" ";
        }
        rowEnd--;

        //decrease row
        for(int i=rowEnd;i>=rowStart;i--)
        {
            cout<<arr[i][columnStart]<<" ";
        }
        columnStart++;

    }

    return 0;
}
