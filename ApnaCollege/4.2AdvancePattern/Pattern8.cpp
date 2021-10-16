//Inverted Pyramid with number

#include<iostream>
using namespace std;

int main()
{int n;
    cin>>n;
for(int i=1;i<=n;i++)
{    int p=1;
    for(int j=1;j<=n-i+1;j++)
    { 
       cout<<j<<" ";
        
    }
    cout<<endl;
}




return 0;
}