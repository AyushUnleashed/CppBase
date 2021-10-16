
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n,p;
    cin>>n;
    
    cout<<"Pattern is:\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   
            if(i==1)
            {
                cout<<j<<" ";
            }
            else if(i==n)
            {
                cout<<n-j+1<<" ";
            }
            else
            {
                if(j==1)
                {
                    cout<<i<<" ";
                }
                else if(j==n)
                {
                    cout<<n-i+1<<" ";
                }
                else
                {
                    cout<<"  ";
                }
            }
            p++;
        }
        cout<<"\n";
    }
    return 0;
}