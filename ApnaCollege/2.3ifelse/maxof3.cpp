#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a,b,c\n";
    cin>>a>>b>>c;
    if(a>b)
    {   cout<<"Biggest no.";
        if(a>c)
        cout<<a;
        else
        cout<<c;
    }
    else if(b>c)
    cout<<"Biggest no."<<b;
    else
    {
        cout<<"Biggest no."<<c;
    }
    
}