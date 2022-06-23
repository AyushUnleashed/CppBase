#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// spells[i] represents the strength of the ith spell 
// potions[j] represents the strength of the jth potion.

// A spell and potion pair is considered successful if the product of their strengths is at least success.

// spells[i] * potions[j] >= success then it is succesful

// return pairs[i] -> no. of potions for every spell[i] which were successfull


class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int> pairs;
        
        int n = spells.size();
        int m = potions.size();


        for(long long i=0;i<spells.size();i++)
        {
            long long temp=0;
            long long count=0;
            
            
            for(long long j=0;j<potions.size();j++)
            {
                if(spells[i]*potions[j]>=success)
                {
                    count++;
                }  
            }
            pairs.push_back(count);
        }

        return pairs;
    }
};