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

  if (pq.size() == 0) {
    return -1;
  }

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

    //swap and pop
      int ans = pq[0];
      pq[0] = pq[lastIdx];
    
      pq.pop_back();

      int currIdx = 0;
      int leftChildIdx = 2 * currIdx + 1;
      int rightChildIdx = 2 * currIdx + 2;
     
      // if left child doesn't exist, right child won't.
      while (leftChildIdx < pq.size()) {
        int minIdx = currIdx;

        if (pq[minIdx] > pq[leftChildIdx]) {
          minIdx = leftChildIdx;
        }

        if (rightChildIdx < pq.size()) {
          //   // right child exist
          if (pq[minIdx]> pq[rightChildIdx]) {
            minIdx = rightChildIdx;
          }
        }

        if (minIdx == currIdx) {
          break;
        }

        // swap with minIdx;
        int temp = pq[currIdx];
        pq[currIdx] = pq[minIdx];
        pq[minIdx] = temp;

        // reassign
        currIdx = minIdx;
        leftChildIdx = (2 *currIdx) + 1;
        rightChildIdx =(2 *currIdx) + 2;
      }

      return ans;
}