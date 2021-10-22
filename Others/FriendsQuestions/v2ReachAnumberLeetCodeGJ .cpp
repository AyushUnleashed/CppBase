//https://leetcode.com/problems/reach-a-number/
#include<iostream>
using namespace std;

// from 0 to target
// ith move take i steps
// left or right
//find minimum numMoves

// we find sum of natural numbers;

 int reachNumber(int target) 
{
    int currPos=0;  
    int numMoves;
    int i=1;
    
    if(target<0) // i made it only for positive numbers so..
    {
        target = -target; //makes it positive
    }
        
    int gap = currPos-target;
        
    while(!((gap%2==0) && (gap>=0))) //if you don't have even positive gap
    {
        currPos= i*(i+1)/2; // sum of i steps
        gap = currPos - target;
        numMoves=i;
        i++;
    }
        
    // if(target==currPos)
    // {
    //     cout<<"We reached target";
    // }
    return numMoves;
    }
    //we in theory are first finding out the number of step to reach above
    //our target by even gap
    //even becuase ,when we move left(-ve | subtract)
    // then taking +1 , make a gap of 2
    //eg: 1+2+3+4+5 = 15
    //1+2-3+4+5 = 1+2+3+4+5 -2*3 = 15-6 =9
    // so for reaching target we just need to know what to subtract
    // eg: target =10
    //and we are on 16, so we just 6/2 =3 , make 3 left(-ve)
    // in reality changing direction of step doesn't affect the number of       //moves


int main()
{
    reachNumber(10);
    return 0;
}