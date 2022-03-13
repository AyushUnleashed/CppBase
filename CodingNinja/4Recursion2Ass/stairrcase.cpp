#include<iostream>
#include<string>
using namespace std;

int staircase(int n)
{
    if(n==0)
    {
        return 1;   //only 1 way ,you already here
    }

    int ans1=0,ans2=0,ans3=0;
    if(n>=3)
    {
        ans1= staircase(n-3);
    }

    if(n>=2)
    {
        ans2=staircase(n-2);
    }

    if(n>=1)
    {
        ans3=staircase(n-1);
    }

    return (ans1+ans2+ans3);
}

int main()  
{
    system("cls");  
    int n;
    cin>>n;
    cout<<staircase(n);
    return 0;
}

