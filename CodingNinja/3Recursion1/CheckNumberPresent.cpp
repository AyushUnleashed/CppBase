#include<iostream>
#include<conio.h>
using namespace std;

bool checkNumber(int* input,int n,int x)
{   
    // cout<<"input[0]:"<<input[0]<<" "<<"X:"<<x<<endl;
    if(x==input[0])
    {
        return true;
    }

    if(n==1)
    {
        return false;
    }
    checkNumber(input+1,n-1,x);
}

int main()
{
    int n=5;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int x;
    cin>>x;
    cout<<checkNumber(input,n,x);
}