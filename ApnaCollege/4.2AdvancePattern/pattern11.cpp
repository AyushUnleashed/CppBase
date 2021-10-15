//pyramid with Spaces

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{   system("cls");
    int n;
    cout<<"Enter no. of rows:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=n-i;j++)
        {
            cout<<" ";
        }

        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}