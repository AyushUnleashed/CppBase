
#include<iostream>
using namespace std;

int main()
{
    int n,count=1;
    cout<<"Enter n:";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {   
        for(int j=1;j<=i;j++)
        {
           cout<<count<<" ";
           count++; 
        }
        cout<<endl;
    }
    
    return 0;
}
