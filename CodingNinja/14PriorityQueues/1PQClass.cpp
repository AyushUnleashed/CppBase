#include<iostream>
#include<vector>
using namespace std;

//MinHeap implementation

class PQ{
    vector<int> pq;
    public:

    PQ(){

    }
    void insert(int ele);
    int removeMin();
    int getMin(){
        if(isEmpty()){
            return -1;
        }
        return pq[0];
    }

    int getSize(){
        return pq.size();
    }

    bool isEmpty(){
        return pq.size()==0;
    }

    bool isIdxValid(int idx){
        if(idx<pq.size()){
            return true;
        }
        return false;
    }
};

void PQ::insert(int ele){
    // push element at last posn
    // get curr node index
    // compare with parent, if parent> node, swap
    // repeat if cond false, break out
    pq.push_back(ele);
    if(getSize()==1){
        return;
    }
    
    int currIdx=pq.size()-1;
    // node added, now we swap if needed
    int parentIdx = (currIdx-1)/2;

   while(pq[parentIdx]>pq[currIdx]  && currIdx>0 && parentIdx>0){
        
        //swap
        int temp= pq[parentIdx];
        pq[parentIdx]=pq[currIdx];
        pq[currIdx]=temp;

        currIdx=parentIdx;
        parentIdx = (currIdx-1)/2;
    } 

}

int PQ::removeMin() {
        // Write your code here
        int lastIdx = pq.size() - 1;

        // swap top element with last ele
        // pop last element
        // curr=pq[0]
        // down heapify
        // comparison
        // check if left child exist & right child exist
        // if both doesn't exist break
        // compare with left and right child
        // swap if leftChild< Curr, set currIdx= leftChildIdx
        // swap if rightChild<Curr, -||-

        if (getSize() == 0) {
          return -1;
        }
        if (getSize() == 1) {
            int del = pq[0];
          pq.pop_back();
          return del;
        }

        // swap top element with last ele
        int temp = pq[0];
        pq[0] = pq[lastIdx];
        pq[lastIdx] = temp;

        int del = pq[lastIdx];
        // pop last element
        pq.pop_back();
        
        lastIdx = pq.size() - 1;

        // down heapify, if needed
        int currIdx = 0;

        int leftChildIdx = 2 * currIdx + 1;
        int rightChildIdx = 2 * currIdx + 2;

        while (isIdxValid(leftChildIdx) || isIdxValid(rightChildIdx)) {

          leftChildIdx = 2 * currIdx + 1;
          rightChildIdx = 2 * currIdx + 2;

          if (isIdxValid(leftChildIdx) && isIdxValid(rightChildIdx)) {
            // both exist
            if (pq[leftChildIdx] < pq[rightChildIdx]) {

              if (pq[currIdx] > pq[leftChildIdx]) {
                // swap
                int temp = pq[currIdx];
                pq[currIdx] = pq[leftChildIdx];
                pq[leftChildIdx] = temp;
                currIdx = leftChildIdx;
              } else {
                break;
              }

            } else {
              // rightChild>=leftChild
              if (pq[currIdx] > pq[rightChildIdx]) {
                // swap
                int temp = pq[currIdx];
                pq[currIdx] = pq[rightChildIdx];
                pq[rightChildIdx] = temp;
                currIdx = rightChildIdx;
              } else {
                break;
              }
            }

          } else if (isIdxValid(leftChildIdx)) {

            if (pq[currIdx] > pq[leftChildIdx]) {
              // swap
              int temp = pq[currIdx];
              pq[currIdx] = pq[leftChildIdx];
              pq[leftChildIdx] = temp;
              currIdx = leftChildIdx;
            } else {
              break;
            }

          } else if (isIdxValid(rightChildIdx)) {

            if (pq[currIdx] > pq[rightChildIdx]) {
              // swap
              int temp = pq[currIdx];
              pq[currIdx] = pq[rightChildIdx];
              pq[rightChildIdx] = temp;
              currIdx = rightChildIdx;
            } else {
              break;
            }
          }
        }
        return del;
}