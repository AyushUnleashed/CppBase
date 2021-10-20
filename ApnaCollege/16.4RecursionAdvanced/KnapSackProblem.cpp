// 0-1 Knapsack problem

//broken
#include<iostream>
using namespace std;

int knapSackProblem(int val[],int wt[],int currW,int currV,int W,int i)
{
    if(currW>W)
    {
        return currV;
    }

    //taking this one
    int a =knapSackProblem(val,wt,currW+wt[i],currV+val[i],W,i+1);

    //not taking this one
    int b = knapSackProblem(val,wt,currW,currV,W,i+1);
}

int main()
{
    system("cls");
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W=50;
    int n;
    cout<<knapSackProblem(val,wt,0,0,W,0);
}