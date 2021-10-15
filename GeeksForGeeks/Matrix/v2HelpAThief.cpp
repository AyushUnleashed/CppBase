/*
You have to help a thief to steal as many as GoldCoins as possible from a GoldMine.
There he saw N Gold Boxes an each Gold Boxes consists of Ai Plates each plates consists of Bi Gold Coins.
Your task is to print the maximum gold coins theif can steal if he can take a maximum of T plates.
 */

// A[i] -> total plates in ith box
// B[i] -> coins in ith box plate

#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

int maxCoins(int A[], int B[], int T, int N)
{
    int maxCoinPlateB=-1;   //to Find plate to take coin from.
    int plateCount=0;   //total plates taken;
    int sum=0;  //max Coin Sum
    //total plates to take T
    // Size of A[] and B[] is N

    //    bool plateTakenA[N];

    for(int i=0;i<N;i++)
    {
        //  plateTakenA[i] = false;
    }


    //for(int i=0;i<N;i++)
    {   
        for(int j=0;j<N;j++)
        {
            //find max of B[];
            // if( B[j] > maxCoinPlateB && A[j] > 0)
            // {
            //     maxCoinPlateB = B[j];
            // }

            //found the most profitable plate;
            //if plates has to be taken 
            while(plateCount< T)
            {   
                if(A[j] > 0 )   // if plate hai lene ke liye
                {
                    sum = sum + B[j];
                    A[j]--;
                    plateCount++ ;
                }
                else 
                { break;}
            }
        }
    }
}

int main()
{   system("cls");
    int T, N;
    cin>>T;
    cin>>N;
    int A[N]; int B[N]; 
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<N;i++)
    {
        cin>>B[i];
    }

    cout<<endl<<endl<<maxCoins(A,B,T,N); 

    return 0;
}