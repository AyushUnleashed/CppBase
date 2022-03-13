#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//we return size
//first coulmn store the length of row


int subset(int input[],int n,int output[][20])
{
    if(n==1)
    {
        return 2;
    }

    int smallOutputSize = subset(input+1,n-1,output);
    
    for(int i=0;i<smallOutputSize;i++)
    {
        int rowLength =output[i][0];
        for(int j=0;j<rowLength;j++)
        {
            output[i+smallOutputSize][j]=output[i][j];
        }  
        //shift all element to right by 1 from index 1 to index= output[i][0]
        //increase output[i][0] ++;
        //output[i][1]=input[0];

        for(int j=rowLength+1;j>1;j--)
        { 
            output[i][j]=output[i][j-1];
        }
        output[i][0]+=1;
        output[i][1]=input[0];
    }   
    return 2*smallOutputSize;
}



int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>n;
    }
    int output[n][20];
    int length = subset(arr,n,output);
    return 0;
}