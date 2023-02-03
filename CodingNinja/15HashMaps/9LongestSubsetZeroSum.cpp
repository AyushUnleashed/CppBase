#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int *arr, int n) {
  // O(n)
    unordered_map<int,int> mp;
    int prefixSum=0;
    int maxLen = 0;

    for(int i=0;i<n;i++){
        prefixSum+=arr[i];

        if(prefixSum==0){
            maxLen=max(i+1,maxLen);
        }else {

            if (mp.find(prefixSum) != mp.end()) {
                // if prefixSum already exist
                int len = i - mp[prefixSum];
                maxLen = max(len, maxLen);
            } else {
                mp[prefixSum] = i;
            }
        }
    }
    return maxLen;
}

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}


// int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
//     //O(n2)
//     int maxLen=0;

//     for(int i=0;i<n;i++){
//         int currSum=0;
//         int currLen=0;
//         for(int j=i;j<n;j++){
//             currSum+=arr[j];
//             currLen++;
//             if(currSum==0){
//                 maxLen=max(maxLen,currLen);
//             }
//         }
//     }
//     return maxLen;
// }