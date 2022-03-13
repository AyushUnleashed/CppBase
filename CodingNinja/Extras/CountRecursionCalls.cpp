#include<iostream>
#include<conio.h>
using namespace std;

int countCalls(int n)
{
    cout<<"\nAlive";
    if(n==1)
    {
        return 1;
    }
    int smallOutput =countCalls(n/2);
    int ans= 1+smallOutput;
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<countCalls(n);
}