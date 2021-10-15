//Given binary matrix fin no. of zeros
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int zeroCount=0;
    int N=2;
    int A[N][N] = { {0,1},{1,1} };

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<N;j++)
    //     {
    //         cout<<A[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
           if(A[i][j]==0)
           {   //cout<<"\ni:"<<i<<"\tj:"<<j;
               zeroCount++;
           }
        }
    }
    cout<<zeroCount;
}

