//Program to make combination
#include<iostream>
#include<conio.h>
#include"myheader.h"

using namespace std;

int Comb(int n,int r)
{   int comb,deno;
    deno=n-r;
    comb= fact(n)/(fact(deno)*fact(r));
    return comb;
}

int main()
{   
    system("cls");
    int n,r,comb,deno;
    cout<<"\nEnter n:";cin>>n;
    cout<<"\nEnter r(0-n):";cin>>r;
    comb=Comb(n,r);
    cout<<"Combination is:"<<comb;
    return 0;
    
}