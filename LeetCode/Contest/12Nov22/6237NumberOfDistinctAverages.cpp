#include<iostream>
#include<bits/stdc++.h>

using namespace std;

    int distinctAverages(vector<int>& nums) {
        
        
        unordered_map<int,bool> averageMap;
    
        while(!nums.empty())
        {   //find minimum
            int min =*min_element(nums.begin(),nums.end());      
            //find maximum
            int max =*max_element(nums.begin(),nums.end());
            //find average
            int average = (min+max)/2;
            //save average in hash map
            averageMap[average]=1;
            //remove element
            
            vector<int>::iterator newEnd;
            newEnd = remove(nums.begin(),nums.end(),min);
            newEnd =remove(nums.begin(),nums.end(),max);
        }
        //return size of hash map
        return averageMap.size();
    }


    int main(){
        vector<int> vect;
        
        for(int i=0;i<6;i++){
            cin>>vect[i];
        }

        cout<<distinctAverages(vect);
        return 0;

    }