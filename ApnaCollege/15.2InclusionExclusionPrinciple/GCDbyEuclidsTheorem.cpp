#include<iostream>
#include<conio.h>
using namespace std;
// GCDbyEuclidsTheorem
int gcd(int a,int b)
{
    while (b!=0)
    {
        int rem = a%b;
        a = b;
        b= rem;
    }
    return a;
}

int main()
{
    system("cls");
    cout<<"GCD using Euclids Theorem:\n";
    int a,b;
    cin>>a>>b;
    int ans = gcd(a,b);
    cout<<ans;
    return 0;
}