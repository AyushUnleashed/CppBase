#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    int triangularSum(vector<int>& nums) {

    int n = nums.size();
    vector<int> newNums;

    while(n!=1)
    {
        for(int i=0;i<n-1;i++)
        {
            newNums[i] = (nums[i] + nums[i+1]) % 10;
        }

        n=n-1;
        nums.pop_back();
        for(int i=0;i<n;i++)
        {
            nums[i]=newNums[i];
        }
    }

    if(n==1)
    {
        return nums[0];
    }
    return -1;
        
    }

int main()
{
    vector<int> g1;
  
    for (int i = 1; i <= 5; i++)
    {
        g1.push_back(i);
    }   

    cout<<"Output:"<<triangularSum(g1);
    
    return 0;
}