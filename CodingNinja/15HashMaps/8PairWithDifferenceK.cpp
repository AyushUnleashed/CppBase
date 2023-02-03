#include<bits/stdc++.h>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k) {
  // get freq of each
  // find(mp[arr[i]]+k)
  // nC1 * mC1 = n*m
  if(n==0) return 0;
  if(n==1) return 0;
  unordered_map<int, int> mp;
  for(int i=0;i<n;i++) {
    mp[arr[i]]++;
  }
  // got freq

  int ans = 0;
  for (auto itr = mp.begin(); itr != mp.end(); itr++) {

    int key = itr->first;

	if(k==0){
		int freq=mp[key];
		int total = (freq * (freq - 1)) / 2 ;
		ans += total;
    } else if (mp.find(key + k) != mp.end()) {
      //+k exist
      int n = mp[key];
      int m = mp[key + k];
      int total = n * m;
      ans += total;
    }
	
  }

  return ans;
}

int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}