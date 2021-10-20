//TlE error

#include<iostream>
#include<math.h>
using namespace std;

int knapSackProbelm(int val[],int wt[],int n,int W)
{
    int maxValue=-1;
    int total = pow(2,n);   //total no. of sets

    //bit manipulation to generate subset sum
    for(int i=0; i < total; i++)
    {   int valSum=0;
        int wtSum=0;
        //check bit
        int num=i;
    
        for(int j=0;j<n;j++)
        {  
            int mask= 1<<j;
            //cout<<"\tmask:"<<mask;
            if((num & mask)!=0)
            {    
                //its 1 //element exist
                //if element exist add it to sum
                valSum += val[j];
                wtSum +=wt[j];
            }
        }
        if(wtSum<=W)
        { maxValue = max(maxValue,valSum); }
    }
    return maxValue;
}

int main()
{
    system("cls");
    int val[] = {100,50,150};
    int wt[] = {10,20,30};
    int W=50;
    int n;
    cout<<knapSackProbelm(val,wt,3,W);

}