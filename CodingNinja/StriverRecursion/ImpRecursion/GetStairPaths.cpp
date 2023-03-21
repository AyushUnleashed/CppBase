#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n) {
  //Write your code here
  //base case
    vector<string> totalPaths;
    if(n==0){
        totalPaths.push_back("");
        return totalPaths;
    }
    string temp;

    if(n-1>=0){
        vector<string> path1 = get_stair_paths(n-1);
        for(auto &path:path1){
            totalPaths.push_back("1"+path);
        }
    }
  
    if(n-2>=0){
        vector<string> path2 = get_stair_paths(n-2);
        for(auto &path:path2){
            totalPaths.push_back("2"+path);
        }
    }
  
    if(n-3>=0){
        vector<string> path3 = get_stair_paths(n-3);
        for(auto &path:path3){
            totalPaths.push_back("3"+path);
        }
    }
  
  return totalPaths;
  
}

int main() {
  int n;
  cin >> n;
  vector<string> ans = get_stair_paths(n);
  int cnt = 0;

  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';
}