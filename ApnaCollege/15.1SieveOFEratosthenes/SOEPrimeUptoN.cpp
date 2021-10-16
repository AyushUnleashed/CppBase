#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//O(nloglogn)

//in this method we first make all of  them prim(setting true)
//then step by step remove non prime
//we check if  a number is prime if its prime all its multiples are non prime
// we check from n=2 to n=n;
// by observation multiple of i*1 to i*(n-1) are already marked by numbers less than i 
// therefore we left them by starting loop form i*i


void SieveOFEratosthensPrime(int n)
{
    bool isPrime[n+1];

    for(int i=0;i<=n;i++)
    {
        isPrime[i]=true;
    }

    for(int i=2;i<=n;i++)
    {
        int j=i;
        if(isPrime[i]==true)
        {   
            while((i*j)<=n)
            {
                isPrime[i*j]=false;
                j++;
            }

        }
    }
    cout<<endl;
    for(int i=2;i<=n;i++)
    {
        if(isPrime[i]==true)
        {
            cout<<i<<endl;
        }
    }
}

int main()
{
    system("cls");

    int n;
    cin>>n;
    SieveOFEratosthensPrime(n);
    return 0;
}