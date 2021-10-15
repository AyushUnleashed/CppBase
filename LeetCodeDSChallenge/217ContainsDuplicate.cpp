// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

#include<iostream>
#include<vector>
using namespace std;

//#define ARRAY_SIZE (int)(2*(1e9) + 1)
//#define ARRAY_SIZE (int)(2*(100) + 1)

    bool containsDuplicate(vector<int>& nums) 
    {
        bool ans = false;
        // bool numMap[ARRAY_SIZE] = {0};
        vector<bool> numMap ={0};
        
        for(int i=0;i<nums.size();i++)
        {   
            int loc=nums.size()+nums[i];
            if ( numMap[loc]==1)
            {   
                ans = true; //appeared twice
                return ans;
            }
            else
            {
                numMap[loc] = 1;
            }
        }
        
        //if no element repeated;
        return ans;
    }

int main()
{   system("cls");
    vector<int> myNums = {1,2,3,4};
    cout<<"output:"<<containsDuplicate(myNums);
    return 0;
}