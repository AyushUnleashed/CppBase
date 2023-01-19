//Sort an array in descending order which is k sorted
// which means all elements are only at k-1 distance away from their correct position

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

void kSortedArray(vector<int>& arr,int n,int k){
    priority_queue<int> pq;

    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }
    // build heap with starting k elements

    // go one step at a time

    int j=0; // posn to insert into
    for(int i=k;i<n;i++){
        arr[j]=pq.top();
        pq.pop();
        pq.push(arr[i]);
        j++;
    }
    // n-k elements from start are sorted
    // only last k elements are remaining which are currently in heap

    //empty heap and fill the last k elements
    while(!pq.empty()){
        arr[j]=pq.top();
        pq.pop();
        j++;
    }

    //all elements are sorted nows
}

int main(){
    
    vector<int> arr = {10,12,15,6,9};
    int n=5; int k=3;
    kSortedArray(arr,n,k);

    cout<<endl<<"After Sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}