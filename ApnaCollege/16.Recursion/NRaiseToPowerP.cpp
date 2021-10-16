#include<iostream>
#include<conio.h>
using namespace std;


long long int recursePower(int n,int p)
{
    if(p==0)
    {
        return 1;
    } 
    long long int val = n *recursePower(n,p-1);
    return val;
}

int main()
{   system("cls");
    int n,p;
    cin>>n;
    cin>>p;
    long long int ans = recursePower(n,p);
    cout<<"\n n^p:"<<ans;
    return 0;
}