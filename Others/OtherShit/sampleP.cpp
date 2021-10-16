#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,j,i;
    cin>>n;
    int p=(2*n)-1;
    int q=n;

    
    for( i=1;i<=n;i++)
    {
        
            for(int j=1;j<=p;j++)
            {
                cout<<q<<" ";
            }
            q--;
            p=p-2;
        
            cout<<"\n";
    }

     for(;i<=(2*n-1);i++)
    {
            q++;
            for(int j=1;j<=p;j++)
            {
                cout<<q<<" ";
            }
            p=p-2;
        
            cout<<"\n";
    }
    return 0;
}