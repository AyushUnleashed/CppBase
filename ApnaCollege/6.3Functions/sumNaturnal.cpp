#include<iostream>
#include<conio.h>
using namespace std;

int sum(int);

int main()
{   system("cls");
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"\nSum till n is:"<<sum(n);
    return 0;
}

int sum(int n)
{   int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}