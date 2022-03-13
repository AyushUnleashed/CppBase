#include<iostream>
using namespace std;

int findGCD(int a,int b)
{ 
    if(b==0) return a;
    return findGCD(b,a%b);
}
int main()
{
    int a=5,b=15;
    int gcd =findGCD(a,b);
    cout<<endl<<gcd;
}