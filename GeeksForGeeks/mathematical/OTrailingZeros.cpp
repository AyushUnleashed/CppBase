#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int trailingZeroes(int N)
{    // sum = n/5 + n/(5^2) + n/(5^3) + + n/(5^4) ...
    
    int k=1;
    int sum=0;

    while( ( N / pow(5,k) ) > 0 )
    {
        sum=sum+ ( N/pow(5,k) );
        k++;
    }
    return sum;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    int noOfTrailingZeroes = trailingZeroes(n);
    cout<<endl<<noOfTrailingZeroes;
}