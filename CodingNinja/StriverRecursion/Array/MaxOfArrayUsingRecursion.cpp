#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int max(int arr[], int idx, int n){
    // write your code here
    if(idx==n) return INT_MIN;
    int smallMax = max(arr,idx+1,n);
    if(arr[idx]>smallMax){
        return arr[idx];
    }
    return smallMax;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}
