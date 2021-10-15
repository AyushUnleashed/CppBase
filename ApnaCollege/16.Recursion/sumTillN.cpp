#include<iostream>
#include<conio.h>
using namespace std;

int sum(int n)
{   
    if(n==0)
    {
        return 0;
    }
    int prevSum=sum(n-1);
    return ( n+prevSum);
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    int totalSum = sum(n);
    cout<<"totalSum:"<<totalSum;
    return 0;
}   