#include<bits/stdc++.h>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
  // consecutive
  // we'll assume every element is start of sequence
  // if element smaller than currrent exist, it's not the start of sequence
  // if element smaller than currrent doesn't exist, it's the start of a sequence
  //save it into ans, & start calculating length, if currLen > maxLen, maxLen=currLen, maxValue=currValue

    //1. hashmap, 
   
    unordered_map<int,bool> mp;

    vector<int> ans;

    for(int i=0;i<n;i++){
        mp[arr[i]]=false; //is iterated over
    }

    int maxLen=0;
    int maxEle=0;
    int firstEle=0;

    for(int i=0;i<n;i++){
        
        if(mp[arr[i]]==true) continue;

        if(mp.find(arr[i]-1)==mp.end()){
            //if a num smaller than current doesn't exist
            //it's first of sequence
            int len=0;
            while (mp.find(arr[i] +len) != mp.end()){
                len++;
            }

            if(len>maxLen){
                maxLen=len;
                firstEle=arr[i];
                maxEle=arr[i]+(len-1);
            }
        }
    }
    ans.push_back(firstEle);
    ans.push_back(maxEle);
    return ans;
}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);

    for (auto i = ans.begin(); i != ans.end(); ++i)
        cout << *i << " ";

    delete[] arr;
}
