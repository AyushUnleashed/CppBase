#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int input;
    bool found=false;
    
    //Give Input

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(input==arr[i][j]);
            found=true;
        }
    }

    cout<<"\nFound:"<<found;

    return 0;
}

