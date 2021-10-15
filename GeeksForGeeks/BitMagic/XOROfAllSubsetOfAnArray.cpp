#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
//o(n2)

int gameOfXor(int N , int A[]) 
{
    int subSet[N];
    int total = pow(2,N);   //total no. of sets
    int xorSum=0;
    for(int i=0; i < total; i++)
    {   int xorS=0;
        //check bit
        int num=i;
        for(int j=0;j<N;j++)
        {
            int mask= 1<<j;
            //cout<<"\tmask:"<<mask;
            if((num & mask)!=0)
            {   
                //its 1 //element exist // if element exist add it to substring
                subSet[j] = A[j]; 
            }
            else {    subSet[j]=0;}
            xorS=xorS ^subSet[j];
            cout<<"\nxorS["<<j<<","<<i<<"]"<<xorS;
        }
        xorSum=xorSum^xorS;
        cout<<"\n\nxorSum["<<i<<"]"<<xorSum<<endl;

    }
    cout<<"\n\n\nFinal xorSum:"<<xorSum<<endl;
    return xorSum;
}

int main()
{
    system("cls");
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x=gameOfXor(n,arr);
    return 0;
}