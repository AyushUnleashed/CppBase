#include<iostream>
#include<conio.h>
using namespace std;

int fibo(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    int smallOutput1 = fibo(n-1);
    int smallOutput2 = fibo(n-2);

    return smallOutput1+smallOutput2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
}