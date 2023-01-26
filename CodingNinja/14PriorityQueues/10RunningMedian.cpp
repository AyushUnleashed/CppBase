

#include<iostream>
#include<queue>
#include<vector>
#include <cmath>
using namespace std;

// array
// max heap - min heap
// if curr > max heap , push it into min heap
// if curr < max heap, push it into max heap
// if szDiff> 1 , equate, pop from one, push into other
//  szOfMaxHeap == szOfMinHeap return avg
//  szOfMaxHeap >  szOfMinHeap return maxH.top():
//  szOfMaxHeap <  szOfMinHeap return minH.top():

void findMedian(int *arr, int n)
{
    int median;
    priority_queue<int,vector<int>,greater<int>> minH;
    priority_queue<int> maxH;
    int totalSz=0;
    vector<int> ans;

    for(int i=0;i<n;i++){

      int curr = arr[i];
      if (maxH.size() != 0 && curr > maxH.top()) {
        minH.push(curr);
      } else {
        maxH.push(curr);
      }

      int szDiff = (minH.size() - maxH.size());

        if (abs(szDiff)>1) {
        
            if (maxH.size() > minH.size()) {
            int top = maxH.top();
            maxH.pop();
            minH.push(top);
            } else {
            int top = minH.top();
            minH.pop();
            maxH.push(top);
            }
        }   
    
        totalSz = maxH.size() + minH.size();

        if(totalSz%2!=0){ //odd

            if (maxH.size() > minH.size()) {
                median = maxH.top();
                ans.push_back(median);
            } else if (maxH.size() < minH.size()) {
                median = minH.top();
                ans.push_back(median);
            }
        } else { //even
            median = 0;
            if (!minH.empty())
                median += minH.top();
            if (!maxH.empty())
                median += maxH.top();
            median /= 2;
            ans.push_back(median);
        }
    }

    for(auto &x:ans){
        cout<<x<<" ";
    }

}


int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    findMedian(arr,n);

    delete[] arr;
}
