//Given a binary array nums, return the maximum number of consecutive 1's in the array.
// https://leetcode.com/problems/max-consecutive-ones/

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

 int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int oneCount=0;
        int maxOnes=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                oneCount++;
            }
            if(nums[i]==0)
            {
                if(maxOnes<oneCount)
                {
                    maxOnes=oneCount;
                    oneCount=0;
                }
            }
            
            if(i==nums.size()-1)
            {
                 if(maxOnes<oneCount)
                {
                    maxOnes=oneCount;
                    oneCount=0;
                }
            }
        }
        return maxOnes;
        
    }

    // int findMaxConsecutiveOnes(vector<int>& nums) {
        
    //     int oneCount=0;
    //     int maxOnes=0;
    //     for(int i=0;i<nums.size();i++)
    //     {
    //         if(nums[i]==1)
    //         {
    //             oneCount++;
    //         }
    //         if(nums[i]==0)
    //         {
    //             if(maxOnes<oneCount)
    //             {
    //                 maxOnes=oneCount;
    //                 oneCount=0;
    //             }
    //         }
            
    //         if(i==nums.size()-1)
    //         {
    //              if(maxOnes<oneCount)
    //             {
    //                 maxOnes=oneCount;
    //                 oneCount=0;
    //             }
    //         }
    //     }
    //     return maxOnes;
        
    // }

int main()
{

    vector<int> nums;
    int n;    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }  
    cout<<"\nAns:"<<findMaxConsecutiveOnes(nums);
    
}

