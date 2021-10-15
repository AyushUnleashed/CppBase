//NumberOfBitsToConvertAToB.cpp

#include<iostream>
#include<conio.h>
using namespace std;

int checkBit(int num,int i)
{
    int mask = 1<<i;

    if( (mask & num) != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    system("cls");
    int bitCount=0;
    int a;
    cin>>a;
    int b;
    cin>>b;

    int max = a>b ? a:b;

    int n=0;
    while(max>0)
    {   
        n++;
        max=max/2;    
    }

    //cout<<endl<<checkBit(3,1);

    for(int i=0;i<=n+1;i++)
    {
        if(checkBit(a,i) != checkBit(b,i))
        {   
            cout<<endl<<checkBit(a,i)<<" "<<checkBit(b,i);
            bitCount++;
        }
        else
        {
            //do nothing
        }
    }
    cout<<"\nTotal bits need to change to convert "<<a<<" to "<<b<<" is:"<<bitCount;
    return 0;
}