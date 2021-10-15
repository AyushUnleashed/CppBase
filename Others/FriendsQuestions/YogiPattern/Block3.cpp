#include<iostream>
#include<conio.h>
using namespace std;

//Block1

int main()
{
    system("cls");
    int n;
    cin>>n;
    int r=n;
    //int l=(2*n)-1;
    
    system("cls");
    int i;

    for(i=1;i<=n;i++)
    {   
        r=n-i+2;
        while(r<=n)
        {
            cout<<r;
            r++;
        }
        
    
        cout<<"\n";
    }

    for(i=n-1;i>0;i--)
    {   
        r=n-i+2;
        while(r<=n)
        {
            cout<<r;
            r++;
        }
        
    
        cout<<"\n";
    }

  
    return 0;
}