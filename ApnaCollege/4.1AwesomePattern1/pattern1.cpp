//Rectangle Pattern
#include<iostream>
using namespace std;

int main()
{    int n,m;
    cout<<"Enetr no. of rows and column:\n";
    cin>>n>>m;
    cout<<endl<<endl;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}