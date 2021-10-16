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
        cout<<n-i+1;
        cout<<"\n";
    }

    for(i=n-1;i>=1;i--)
    {   
        cout<<n-i+1;
        cout<<"\n";
    }

  
    return 0;
}