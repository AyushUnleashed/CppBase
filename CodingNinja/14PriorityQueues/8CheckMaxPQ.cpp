#include <iostream>
using namespace std;


bool isMaxHeap(int arr[], int n) {

    bool ans=true;
    for(int i=0;i<n;i++){
      int leftChildIdx = 2* i + 1;
      int rightChildIdx = 2*i+2;

      bool leftExist=false;
      bool rightExist=false;

      if(leftChildIdx < n){
        leftExist=true;
      }

      if (rightChildIdx < n){
          rightExist=true;
      }

     if (leftExist && arr[leftChildIdx] > arr[i]){
          ans=false;
          break;
      }
    
     if (rightExist && arr[rightChildIdx] > arr[i]) {
        ans = false;
        break;
      }

      if(rightExist && !leftExist){
          ans=false;
          break;
      }
    }
    
    return ans;
}


int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}