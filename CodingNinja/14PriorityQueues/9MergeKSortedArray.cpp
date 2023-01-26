#include <bits/stdc++.h>
using namespace std;

// To track the ith array & jth position of the element
class Node{
    public:
  int val;
  int i;
  int j;

  Node(int val, int i, int j) {
    this->val = val;
    this->i = i;
    this->j = j;
    }
};

// to sort nodes by value in ascending order
// MinHeap logic
class Compare {
public:
  bool operator()(Node a, Node b) {
    if (a.val > b.val) {
      return true;
    } else {
      return false;
    }
  }
};

vector<int> mergeKSortedArrays(vector<vector<int> *> input) {

  vector<int> ans;

  int k = input.size();
  if (k == 0) {
    return ans;
  }

  priority_queue<Node, vector<Node>, Compare> pq;
  // build heap from first elements of all lists

  for (int i = 0; i < k; i++) {
    vector<int> curr = *input[i];
    if(curr.size()>0){
      pq.push(Node(curr[0], i, 0));
    }
  }

  if (pq.empty()) {
    return ans;
  }
  //get all values for Top element

  int i = pq.top().i;
  int j=pq.top().j;
  int val = pq.top().val;

  //push it into ans, pop it from heap
  ans.push_back(val);
  pq.pop();

    // push next element to heap if valid index
  j++;
  if(j<input[i]->size()){
    vector<int> curr = *input[i];
    pq.push(Node(curr[j], i, j));
  }

  //repeat till heap is empty

  while (!pq.empty()) {

    int i = pq.top().i;
    int j = pq.top().j;
    int val = pq.top().val;
    pq.pop();

    ans.push_back(val);
    j++;
    if (j < input[i]->size()) {
      vector<int> curr = *input[i];
      pq.push(Node(curr[j], i, j));
    }
  }

    //all elements are sorted in ans vector
  return ans;
}


int main() {
    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int j = 1; j <= k; j++) {
        int size;
        cin >> size;
        vector<int> *current = new vector<int>;

        for (int i = 0; i < size; i++) {
            int a;
            cin >> a;
            current->push_back(a);
        }

        input.push_back(current);
    }

    vector<int> output = mergeKSortedArrays(input);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    return 0;
}