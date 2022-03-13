//Given a binary array nums, return the maximum number of consecutive 1's in the array.
// https://leetcode.com/problems/max-consecutive-ones/

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>&);

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

 int findMaxConsecutiveOnes(vector<int>& nums) {
     cout<<"\nIT Works\n";
    int startZeroIndex = -1;
    int endZeroIndex =-1;
    bool isStartZeroPresent = false;
    bool isEndZeroPresent = false;
    int oneCount =0;
    int maxOnes=-1;

    for(int i=0;i<nums.size();i++)
    {


        if(isStartZeroPresent ==false && isEndZeroPresent == false)
        {
            if(nums[i]==0)
            {
                isStartZeroPresent=true;
                startZeroIndex = i;  
            }
            else
            {
                oneCount++;       

                if(oneCount>maxOnes)
                {
                    maxOnes ==oneCount;
                }
            }
        }
        else if (isStartZeroPresent ==true && isEndZeroPresent == false)
        {
            oneCount++;
            if(nums[i]==0)
            {
                isEndZeroPresent=true;
                endZeroIndex=i;
            }
            if(oneCount>maxOnes)
                {
                    maxOnes ==oneCount;
                }
        }
        else
        {
            if(oneCount>maxOnes)
            {
                maxOnes ==oneCount;
                oneCount=0;
                startZeroIndex = endZeroIndex;

                endZeroIndex=-1;
                isEndZeroPresent = false;
            }
        }
    }
    return maxOnes;
}