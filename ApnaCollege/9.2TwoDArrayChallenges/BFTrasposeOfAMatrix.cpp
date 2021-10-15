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
        for(int j=0;j<n;j++)
        {
            transArr[i][j]=arr[j][i];
        }
    }

    cout<<"\nTranspose is:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transArr[i][j]<<" ";
        }
        cout<<endl;     
    }
    return 0;
}

