#include<bits/stdc++.h>
using namespace std;

int highestFrequency(int arr[], int n) {
    //hash map
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    int maxF=-1; int maxElement;
    for(int i=0;i<n;i++){
        if(freq[arr[i]]>maxF){
            maxF=freq[arr[i]];
            maxElement=arr[i];
        }
    }
   return maxElement;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}