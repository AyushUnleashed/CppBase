#include<iostream>
#include<conio.h>
using namespace std;

// o(N); //fail fot long inputs 
int trailingZeroes(int N)
{   
    int fact=1;
    for(int i=1;i<=N;i++)
    {
        fact=fact*i;
    }

    int count=0;
    while(fact>1)
    {
        if(fact%10==0)
        {
            count++;
        }
        fact=fact/10;
    }
    return count;
}
int main()
{
    system("cls");
    int n;
    cin>>n;
    int noOfTrailingZeroes = trailingZeroes(n);
    cout<<endl<<noOfTrailingZeroes;
}