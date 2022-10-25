#include<iostream>
#include<conio.h>
using namespace std;

// What is fobonacci series
// 0 1 1 2 3 5 8 13 21 ...
// first 2 digit 0, 1
// next digit is sum of prev 2 digits

void fib(int);

int main()
{
    system("cls");
    int n;
    cout<<"Enter n:";
    cin>>n;
    fib(n);
     
return 0;
}


void fib(int n)
{
    int n1=0,n2=1,n3;
    cout<<endl<<n1<<"\t"<<n2;

    for(int i=1;i<=n-2;i++)
    {   
        n3=n1+n2;
        cout<<"\t"<<n3;
        n1=n2;
        n2=n3;
    }
    return;
}