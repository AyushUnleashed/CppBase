#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    // Prime no. divisible by 1 & itself only 
    // so we start loop from 2 & end it at n-1, if it's still divisible, it's not prime
    // 1 is not a prime no.
    // if i reach till without getting divides, then it must be a prime number.
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