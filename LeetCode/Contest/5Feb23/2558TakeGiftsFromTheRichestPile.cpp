/*
You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

Choose the pile with the maximum number of gifts.
If there is more than one pile with the maximum number of gifts, choose any.
Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
Return the number of gifts remaining after k seconds.
*/
#include<bits/stdc++.h>
using namespace std;

/*Approach -> 
1 Get max element from array
2 modify it 
3 repeat k times
4 return sum at end */

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<long long> pq; // since we want max element from array

        for(auto it:gifts) pq.push(it);

        while(k--){ // for k times
            long long temp = pq.top(); pq.pop(); // get max element
            temp = sqrt(temp); pq.push(temp); //modify it and push back
        }
        long long sum = 0; 
        // get sum of all elements & return
        while(pq.size()!=0){
            sum+=pq.top(); pq.pop();
        }
        return sum;
    }
};