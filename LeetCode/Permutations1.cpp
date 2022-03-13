// https://leetcode.com/problems/permutations/
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

//code copied from leet code. orignal code is there
    #include<iostream>
    #include<vector>
    using namespace std;

    vector<vector<int>> ans; 
    void perm(vector<int>&nums,int idx)
    {
        if(nums.size()==idx)
        {
            ans.push_back(nums);
            return;
            
        }
        for(int j=idx;j<nums.size();j++)
        {
            swap(nums[idx],nums[j]);
            perm(nums,idx+1);
            swap(nums[idx],nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        perm(nums,0);
        return ans;
    }