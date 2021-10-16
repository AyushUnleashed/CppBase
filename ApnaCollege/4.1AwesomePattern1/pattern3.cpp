//Inverted half Pyramid
#include<iostream>
using namespace std;

int main()
{   int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i+1;j>0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
return 0;

}