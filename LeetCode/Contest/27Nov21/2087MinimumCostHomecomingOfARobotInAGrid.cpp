#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) 
{
    int totalCost=0;
    //storing indices of player and home
    int x1 = startPos[0];    
    int y1 = startPos[1];
    int x2 = homePos[0];
    int y2 = homePos[1];

    //rows
    int m=rowCosts.size();
    //columns
    int n=colCosts.size();
    

    int Horizontal=+1;
    int Vertical=+1;

    //int i=0;

    while(!(x1==x2 && y1==y2))
    {
        //cout<<x1<<" "<<y1<<endl;
        //i++;
        if(y2>y1)
        {
            //House in Right 
            //move to right
            //Horizontal is +ve
            Horizontal=+1;
        }
        if(y2<y1)
        {
            //House in Left
            //move to left
            //Horizontal is -ve
            Horizontal=-1;
        }

        if(y2==y1)
        {
            //in same column 
            //cannot go left and right 
            //only up and down is possible
            Horizontal=0;
        }

        if(x2>x1)
        {
            //House in Down
            //move to   down
            //Vertical is +ve
            Vertical=+1;
        }
        if(x2<x1)
        {
            //House in Up
            //move to  Up
            //Vertical is -ve
            Vertical=-1;
        }
        if(x2==x1)
        {
            //in same row
            //cannot go up and down
            //only left and right is possible
            Vertical=0;
        }

       //cout<<"\n==============\nHorizontal:"<<Horizontal<<"\nVertical:"<<Vertical;

        //if horizontal cost is less than move horizontal otherwise vertical if applicable

        //row cost for up and down
        //column cost for left and right

        if(x1!=x2)
        {
            x1+=Vertical;
            totalCost+=rowCosts[x1];
        }
        if(y1!=y2)
        {
            y1+=Horizontal;
            totalCost+=colCosts[y1];
        }


        // if(rowCosts[x1+Vertical]<colCosts[y1+Horizontal] && !((x1+Vertical)<0) && !((x1+Vertical)>(m-1)))
        // {
        //     //we will move vertically
        //     //only if its possible to move
        //     cout<<endl<<"IT works1";c
        //     //move Vertical 
        //     totalCost+=rowCosts[x1+Vertical];
        //     x1=x1+Vertical;

        // }
        // else if(rowCosts[x1+Vertical]>=colCosts[y1+Horizontal] && !((y1+Horizontal)<0) && !((y1+Horizontal)>(n-1)))
        // {
        //     cout<<endl<<"IT works2";
        //     totalCost+=colCosts[y1+Horizontal];
        //     y1=y1+Horizontal;

        // }
    }
    return totalCost;
}

int main()
{
    system("cls");
    vector<int> startPos = {1,0};
    vector<int> homePos ={2,3};
    vector<int> rowCosts ={5,4,3};
    vector<int> colCosts  ={8,2,6,7}; 
    cout<<endl<<minCost(startPos,homePos,rowCosts,colCosts) ;
}   