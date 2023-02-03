#include <iostream>
#include <unordered_map>
using namespace std;

int pairSum(int *arr, int n) {
	// Write your code here
    int sum=0;

    unordered_map<int,int> freq;

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    // freq of all  
    // we have to select 2 elements such that their sum is 0
    
    for(int i=0;i<n;i++){
        int curr=arr[i];
        if(freq.find(-curr)!=freq.end()){
            //negative exist
            int n = freq[curr];
            int m = freq[-curr];
            if(curr==0){
                sum+=((n*(n-1))/2); // nC2 , 0 0 0 0 0 => 5C2 => 5*4/2 =10
            }else{
                sum += (n * m); // nC1* mC1 = n*m 
            }
        
            freq.erase(curr);
            freq.erase(-curr);
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}