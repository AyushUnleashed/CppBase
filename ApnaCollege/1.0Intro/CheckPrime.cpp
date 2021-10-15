#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {cout<<"\nNot Prime\n";break;}
        
    }
    
    if(n==1)
    {   
        cout<<"\nNot a Prime no.";
    }
    else
    if(i==n)
    {
        cout<<"\nPrime No.";
    }
    return 0;
}