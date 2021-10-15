#include<iostream>
#include<conio.h>
using namespace std;
//Compute XOR from 1 to n (direct method)

int main()
{
    system("cls");
    int n;
    cin>>n;
    int xorSum=0;
    if(n%4==0)
        xorSum=n;
    if(n%4==1)
        xorSum=1;
    if(n%4==2)
        xorSum=n+1;
    if(n%4==3)
        xorSum=0;
    
    cout<<"\nDirect XorSum:"<<xorSum;
    return 0;
}