#include<iostream>
#include<conio.h>
using namespace std;

//Block1

int main()
{
    system("cls");
    int n;
    cin>>n;
    //int l=(2*n)-1;
    
    system("cls");
    int i;

    for(i=1;i<=n;i++)
    {   
        for(int j=1;j<=i-1;j++)
        {   int l=n-j+1;
            cout<<l<<" ";
        }
    
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {   
        for(int j=1;j<=i-1;j++)
        {   int l=n-j+1;
            cout<<l<<" ";
        }
    
        cout<<"\n";
    }

  
    return 0;
}