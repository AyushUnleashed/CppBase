#include<iostream>
#include<conio.h>
using namespace std;

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int preSum = fibo(n-1)+fibo(n-2);
    return (preSum);
}

int main()
{   system("cls");
    int n;
    cin>>n;
    cout<<"Fibo:"<<fibo(n);
    return 0;
}