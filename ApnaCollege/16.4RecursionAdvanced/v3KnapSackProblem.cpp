#include<iostream>
#include<string.h>
using namespace std;

//W is current space available
//n is current items available
int knapSackProbelm(int val[],int wt[],int n,int W)
{
    if( n==0 || W==0)
    {
        return 0;
    }

    if(wt[n-1] > W)
    {
        //cannot include it
        return knapSackProbelm(val,wt,n-1,W);
    }
    else if(wt[n-1] <= W)
    {
    // include it
    int includeAns =val[n-1] + knapSackProbelm(val,wt,n-1,W-wt[n-1]);

    //do not include it
    int notIncludeAns = knapSackProbelm(val,wt,n-1,W);

    return max(includeAns,notIncludeAns);
    }

}




int main()
{
    system("cls");
    int val[] = {100,50,150};
    int wt[] = {10,20,30};
    int W=50;
    int n=3;
    cout<<knapSackProbelm(val,wt,n,W);

}