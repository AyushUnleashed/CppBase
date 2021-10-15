//pattern 10
#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}