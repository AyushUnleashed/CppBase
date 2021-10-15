#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,l,i;
    cin>>n;
    system("cls");
    for( i=1;i<=n;i++)
    {   l=n-i+1;
        for(int j=1;j<=(i-1);j++)
        {
           cout<<" "; 
        }
        cout<<l;
        cout<<endl;
    }

    for( i=n-1;i>0;i--)
    {   l=n-i+1;
        for(int j=1;j<=(i-1);j++)
        {
           cout<<" "; 
        }
        cout<<l;
        cout<<endl;
    }

    return 0;
}