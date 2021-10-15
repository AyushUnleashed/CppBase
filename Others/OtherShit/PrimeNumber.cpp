#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    bool isPrime=false;
    int i;
    for( i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
        }
        else if(n==1)
        {
            isPrime=false;
        }
    }

    if(i==n)
    {
        isPrime=true;
    }

    if(isPrime==true)
    {
        cout<<"It is Prime no.";
    }else cout<<"\nNot a Prime no";

    return 0;
}