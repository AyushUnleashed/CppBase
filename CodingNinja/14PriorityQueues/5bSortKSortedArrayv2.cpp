//Sort an array in descending order which is k sorted
// which means all elements are only at k-1 distance away from their correct position

#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector <int> nearlySorted(vector<int> arr, int num, int K){
        //build heap of size k min heap for ascending
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> ans(num);
        int j=0;
     
        //start k elements pushed into heap
        for(int i=0;i<num;i++){
            pq.push(arr[i]);
            
            if(pq.size()>K){
                ans[j]=pq.top();
                j++;
                pq.pop();
            }
        }
        
        while(!pq.empty())
        {
            ans[j]=pq.top();
            j++;
            pq.pop();
        }
        return ans;
        
    }

int main(){
    
    vector<int> arr = {10,12,15,6,9};
    int n=5; int k=3;
    arr = nearlySorted(arr,n,k);

    cout<<endl<<"After Sorting:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}