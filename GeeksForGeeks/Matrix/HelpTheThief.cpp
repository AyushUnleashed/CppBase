/* You have to help a thief to steal as many as GoldCoins as possible from a GoldMine. 
There he saw *N* Gold Boxes an each Gold Boxes consists of *Ai* Plates each plates consists of *Bi* Gold Coins.
Your task is to print the maximum gold coins theif can steal if he can take a maximum of *T* plates.
*/

//size of A[] and B[] is N
// Add maxPlate coins  T times.  
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int maxCoins(int A[], int B[], int T, int N) 
{   
    int maxPlateCoins=0; // use max fnction to find Ai* Bi add max till <T (given )
    int maximumSteal=0;
    bool isTaken[N];

    for(int i=0;i<N;i++)
    {
        isTaken[i] = false;
    }
    int indexToSkip=-1;
    int count = 0;

    while(count<T)
    {   maxPlateCoins=0;
        for(int i=0;i<N;i++)
        {   
            if(isTaken[i] == true)
            {   
                
                continue;
            }

            int x = A[i] * B[i];
            if(x > maxPlateCoins)
            {
                maxPlateCoins=x;
                indexToSkip = i ;
            }
            cout<<"\nMaxPlate coins:"<<maxPlateCoins;
        }

        isTaken[indexToSkip]=true;
        cout<<"\nindex: "<<indexToSkip<<" is taken"; 

        maximumSteal+=maxPlateCoins;
        cout<<"\nTotal Coins :"<<maximumSteal;
        count = count + A[indexToSkip];
    }

    return maximumSteal;
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

    //cout<<endl<<endl<<maxCoins(A,B,T,N); 

    return 0;
}