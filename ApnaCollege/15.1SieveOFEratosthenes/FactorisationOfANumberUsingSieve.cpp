#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//we mark all multiples of nuumber by its small factor

void SieveOFEratosthensFactor(int n)
{
    int smallestPrimeFactoris[n+1];
    int spFact;

    //setting all spf to -1
    for(int i=0;i<=n;i++)
    {
        smallestPrimeFactoris[i]=-1;// -1 means not set
    }

    //for all values we are marking spf of multiple of prime numbers to them.
    // we start from i*i ,i*(i+1), i* (i+2) ..... i*(i+something)<=n
    for(int i=2;i<=n;i++)
    {
        int j=i;
        // if this number is prime.not set , we mark its multiple by this number as spf
        if(smallestPrimeFactoris[i]==-1)
        {   
            while((i*j)<=n)
            {
                smallestPrimeFactoris[i*j]=i;   //that means spf of 4,6,8,10,12....(multiples of i) is 2(i)(prime)
                j++;
            }

        }
    }

    // if a number is not set( that means it was prime so its spf is itself.(i))
    for(int i=1;i<=n;i++)
    {
        if(smallestPrimeFactoris[i]==-1)
        {
            smallestPrimeFactoris[i]=i;
        }
    }


    // 
        while(n!=1)
    {   
        spFact=smallestPrimeFactoris[n];
        cout<<spFact<<" ";
        n=n/spFact;
    }

}

int main()
{
    system("cls");

    int n;
    cin>>n;
    SieveOFEratosthensFactor(n);
    return 0;
}   