// Given a string S contains 0's, 1's, and 2's, the task is to find the number of goals on the penalty.

//      '1' stands for "goal".
//      '0' stands for "no goal".
//      '2' stands for a foul which gives a penalty.

//if you get goal(1) after penealty we have to count++, 
// cout++ for every 21 in string

#include<iostream>
#include<conio.h>
using namespace std;

int penaltyScore(string str)
{   int count=0; 
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]=='2')
        {
            if(str[i+1]=='1')
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    system("cls");
    string str;
    cin>>str;
    int count = penaltyScore(str);
    cout<<"\nNo. of goals(1) after Penalty(2) are:"<<count;

    return 0;
}