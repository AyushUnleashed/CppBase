#include<iostream>
#include<conio.h>
using namespace std;

int firstIndex(int* input,int size,int x)
{   
    if(size==0)
    {
        return -1;
    }
 
    if(x==input[0])
    {
        return 0;
    }

    int smallOutput = firstIndex(input+1,size-1,x);

    if(smallOutput == -1)
    {
        return -1;
    }
    else
    {
        int ans = 1+ smallOutput;
        return ans;
    }
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
    cout<<firstIndex(input,n,x);
}