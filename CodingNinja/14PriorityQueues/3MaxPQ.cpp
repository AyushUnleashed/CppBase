#include<vector>
#include<bits/stdc++.h>
using namespace std;

class PriorityQueue {
    // Declare the data members here
    vector<int> pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    /**************** Implement all the public functions here ***************/

    void insert(int element) {
       //add to last
       pq.push_back(element);
       int currIdx=pq.size()-1;
       int parentIdx= (currIdx-1)/2;

       while(currIdx>0 && pq[parentIdx]<pq[currIdx]){
           //swap
           int temp=pq[currIdx];
           pq[currIdx]=pq[parentIdx];
           pq[parentIdx]=temp;

           currIdx=parentIdx;
           parentIdx = (currIdx - 1) / 2;
       }
    }

    int getMax() {
        // Implement the getMax() function here
        if(pq.size()==0){
            return -1;
        }
        return pq[0];
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(pq.size()==0){
            return -1;
        }

        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();

        int currIdx=0;
        int leftChildIdx=2*currIdx+1;
        int rightChildIdx=2*currIdx+2;

        while(leftChildIdx<pq.size()){
            int maxIdx=currIdx;

            if(pq[leftChildIdx]>pq[currIdx]){
                maxIdx=leftChildIdx;
            }

            if(rightChildIdx<pq.size()){
                //checking validity of right index
                if(pq[rightChildIdx]>pq[maxIdx])
                {
                  maxIdx = rightChildIdx;
                } 
            }

            if(maxIdx==currIdx){
                break;
            }

            //swap
            int temp=pq[maxIdx];
            pq[maxIdx]=pq[currIdx];
            pq[currIdx]=temp;

            currIdx=maxIdx;
            leftChildIdx = 2 * currIdx + 1;
            rightChildIdx = 2 * currIdx + 2;
        }

        return ans;
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
};