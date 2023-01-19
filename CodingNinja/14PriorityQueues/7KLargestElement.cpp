#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <bits/stdc++.h>


vector<int> kLargest(int input[], int n, int k){
  // largest -> MIN heap
  priority_queue<int, vector<int>, greater<int> > pq;
  // build heap of k elements
  for (int i = 0; i < k; i++) {
    pq.push(input[i]);
  }
  // assume starting k elements are the largest from array
  // now if next element is larger than smallest of heap
  for (int i = k; i < n; i++) {
    if (input[i] > pq.top()) {
      pq.pop();
      pq.push(input[i]);
    }
  }
  // we remove the min element and insert next element into heap
  // at end all elements (k) would be the largest k elements from the array
  // we push it into a vector and return
  vector<int> ans;
  while (!pq.empty()) {
    ans.push_back(pq.top());
    pq.pop();
  }
  return ans;
}


int main() {
	
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
    
    int k;
    cin >> k;
    
    vector<int> output = kLargest(input, size, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << endl;
	
	return 0;
}


