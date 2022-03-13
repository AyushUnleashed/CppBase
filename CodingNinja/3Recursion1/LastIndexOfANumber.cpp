
#include<iostream>
#include<conio.h>
using namespace std;

//going from right to left simple way

int lastIndex(int* input,int size,int x)
{   
    if(size==0)
    {
        return -1;
    }
 
    if(x==input[size-1])
    {
        return (size-1);
    }

    int smallOutput = lastIndex(input,size-1,x);

    return smallOutput;
}

//going from left to right (intended way)

int lastIndex2(int* input,int size,int x)
{   
    if(size==0)
    {
        return -1;
    }

    int smallOutput = lastIndex2(input+1,size-1,x);
    if(smallOutput == -1)
    {
        //check input[0];

        if(input[0]==x)
        {
            return 0;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return smallOutput+1;
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
    cout<<lastIndex2(input,n,x);
}