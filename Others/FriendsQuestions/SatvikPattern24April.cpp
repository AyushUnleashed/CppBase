#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");

    int n;  cin>>n;
    int counter=0;  int x=0;    
    int p=(n/2)+1;  x=1+(n*counter);
    
    for(int i=1;i<=n;i++)
    {   

        if(i<p)
        {
            counter+=2;
        }
        else if(i==p)
        {
            counter-=1;
        }
        else if(i>p)
        {
            counter=counter-2;
        }

        for(int j=x;j<x+n;j++)
        {
            if(j!= x + n -1)
            cout<<j<<" x ";
            else cout<<j;
        }

        cout<<endl;
    }
    return 0;
}