// half Pyramid using numbers

#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {cout<<i;}
        cout<<endl;
    }
    return 0;
}