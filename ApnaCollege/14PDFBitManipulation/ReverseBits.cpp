#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

long long reversedBits(long long X) 
{   
    long long arr[32],finalAns=0;

    for(int i=0;i<32;i++)
    {
        arr[i]=0;
    }

    int index=0;
    while (X)
    {
        if((1 & X)!= 0)//current bit is 1
        {
            arr[index]=1;
        }
        else    //current bit is 1;
        {
            arr[index]=0;
        }

        X=X>>1; //reducing x;
        index++;
    }

    for(int i=0;i<16;i++)
    {
        int temp=arr[i];
        arr[i]=arr[31-i];
        arr[31-i]=temp;
    }

    for(int i=0;i<32;i++)
    {
        if(arr[i]==1)
        {
            // long long mask = 1<<i;
            // finalAns    = ( finalAns | mask);
            finalAns+=pow(2,i);
        }
    }

    return finalAns;
}

int main()
{
    system("cls");
    long long  n;
    cin>>n;
    long long ans;
    ans=reversedBits(n);
    cout<<endl<<"Final Ans:"<<ans;

    return 0;
}