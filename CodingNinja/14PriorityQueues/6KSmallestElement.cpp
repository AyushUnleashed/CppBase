#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include <bits/stdc++.h>


vector<int> kSmallest(int arr[], int n, int k) {

    //smallest -> MAX heap
    priority_queue<int> pq;
    //build heap of k elements
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // assume starting k elements are the smallest from array
    // now if next element is smaller than largest of heap
    for(int i=k;i<n;i++){
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // we remove the max element and insert next element into heap
    // at end all elements (k) would be the smallest k elements from the array
    // we push it into a vector and return
    vector<int> ans;
    while(!pq.empty()){
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}


int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}


