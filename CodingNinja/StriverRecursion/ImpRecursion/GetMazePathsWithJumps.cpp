#include<iostream>
#include<vector>
#include<string>

using namespace std;
vector<vector<vector<string>>> dp;

vector<string> get_maze_paths(int sr, int sc, int dr, int dc) {
  //Write your code here
  vector<string> totalPaths;

   if(sr==dr && sc==dc){
    totalPaths.push_back("");
    return totalPaths;
  }

  //horizontal move
    for(int i=1;i<=dc-sc;i++){
      vector<string> smallAns;
      if(dp[sr][sc+i].size()==0){
        smallAns = get_maze_paths(sr,sc+i,dr,dc);
        dp[sr][sc+i] = smallAns;
      }else{
        smallAns =dp[sr][sc+i];
      }
      
      for(int j=0;j<smallAns.size();j++){
        string temp = to_string(i);
        totalPaths.push_back("h"+temp+smallAns[j]);
      }
  }

    //vertical move
  
  for(int i=1;i<=dr-sr;i++){
      vector<string> smallAns;
      if(dp[sr+i][sc].size()==0){
        smallAns = get_maze_paths(sr+i,sc,dr,dc);
        dp[sr+i][sc] = smallAns;
      }else{
        smallAns =dp[sr+i][sc];
      }
      
      for(int j=0;j<smallAns.size();j++){
        string temp = to_string(i);
        totalPaths.push_back("v"+temp+smallAns[j]);
      }
  }
  
  // diagonal move 
    for(int i=1;(i<=dr-sr) && (i<=dc-sc);i++){
      vector<string> smallAns;
      if(dp[sr+i][sc+i].size()==0){
        smallAns = get_maze_paths(sr+i,sc+i,dr,dc);
        dp[sr+i][sc+i] = smallAns;
      }else{
        smallAns =dp[sr+i][sc+i];
      }
      
      for(int j=0;j<smallAns.size();j++){
        string temp = to_string(i);
        totalPaths.push_back("d"+temp+smallAns[j]);
      }
  }
  
  return totalPaths;
}

void display(vector<string>& arr) {
  cout << "[";
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
    if (i < arr.size() - 1) cout << ", ";
  }

  cout << "]" << endl;
}


int main() {
  int n, m;
  cin >> n >> m;
  dp.resize(n,vector<vector<string>> (m));
  vector<string> ans = get_maze_paths(0, 0, n - 1, m - 1);
  display(ans);

  return 0;
}