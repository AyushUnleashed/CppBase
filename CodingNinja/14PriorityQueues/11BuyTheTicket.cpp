#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int idx;
    int val;
    Node(int idx,int val){
        this->idx = idx;
        this->val = val;
    }
};

class Compare {
public:
  bool operator()(Node a, Node b) {
    if (a.val < b.val) {
      return true;
    } else {
      return false;
    }
  }
};

int buyTicket(int *arr, int n, int k) {
    priority_queue<Node, vector<Node>,Compare> pq;

    int you = arr[k];
    for(int i=0;i<n;i++){
        pq.push(Node(i,arr[i]));
    }

    int t=1;
    while(!( (pq.top().idx == k && pq.top().val == you) || pq.empty())){
        pq.pop();
        t++;
    }


    return t;
    
}

int main() {
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << buyTicket(arr, n, k);

    delete[] arr;
}