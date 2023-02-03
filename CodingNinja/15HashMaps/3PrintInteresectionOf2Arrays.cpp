#include<bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
   
   unordered_map<int,int> mp1;
   unordered_map<int, int> mp2;

   for(int i=0;i<n;i++){
       mp1[arr1[i]]++;
   }
   for (int i = 0; i < m; i++) {
     mp2[arr2[i]]++;
   }

   for (int i = 0; i < n; i++) {
        int curr= arr1[i];
        if((mp1[curr]!=0) && (mp2[curr]!=0)){
            //exist in both
            int minm = min(mp1[curr],mp2[curr]);
            // print the no. of times it's present in both
            while(minm>0){
                cout<<curr<<endl;
                minm--;
            }
            //set it to 0, to avoid printing again
            mp1[curr]=0;mp2[curr]=0;
        }
   }
}
int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}