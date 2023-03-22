#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> get_stair_paths(int n) {

  //base case
    vector<string> totalPaths;
    if(n==0){
        totalPaths.push_back(""); //to move from 0 to 0 (just one way, don't move)
        return totalPaths;
    }
    if(n<0){ //for -1,-2 no paths, so nothing added 
        return totalPaths; // no path added
    }

    vector<string> path1 = get_stair_paths(n-1);
    for(auto &path:path1){
        totalPaths.push_back("1"+path);
    }

    vector<string> path2 = get_stair_paths(n-2);
    for(auto &path:path2){
        totalPaths.push_back("2"+path);
    }


    vector<string> path3 = get_stair_paths(n-3);
    for(auto &path:path3){
        totalPaths.push_back("3"+path);
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