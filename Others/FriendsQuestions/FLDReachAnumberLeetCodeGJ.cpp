//https://leetcode.com/problems/reach-a-number/
#include<iostream>
//wrong doesn't work

using namespace std;

// from 0 to target
// ith move take i steps
// left or right
//find minimum numMoves

int reachNumber(int target) 
{
    int currPos = 0;
    int numMoves;
    int i=1;
    int totalSum
    int minSomething;

    while(target < (( i*(i+1))/2 ))
    {
        //do nothing
        currPos+=i;
        i++;
    }
    else
    {   currPos-=i;
        i--;
        minSomething =currPos; 
    }

    while(currPos != target)
    {
        i++;
        //go left  -ve
        currPos-=i;
        //go right
    }
    
}