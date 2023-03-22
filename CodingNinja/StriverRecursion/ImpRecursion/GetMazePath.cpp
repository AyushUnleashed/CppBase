#include<iostream>
#include<vector>

using namespace std;

// sr - source row
// sc - source column
// dr - destination row
// dc - destination column
vector <string> getMazePaths(int sr, int sc, int dr, int dc) {
    int i = sr;
    int j=sc;
    int n = dr;
    int m = dc;
    
    vector<string> ans;
    vector<string> rightCall;
    vector<string> bottomCall;

    if(i==n && j==m){
        ans.push_back("");
        return ans;
    }
    
    if(j<m){
        rightCall = getMazePaths(i,j+1,n,m);
    }

    if(i<n){
        bottomCall = getMazePaths(i+1,j,n,m);
    }
    
    for(auto &path:rightCall){
        ans.push_back("h"+path);
    }

    for(auto &path:bottomCall){
        ans.push_back("v"+path);
    }
    
    return ans;
}

void display(vector<string>& arr){
    cout << "[";
    for(int i = 0;i < arr.size();i++){
        cout << arr[i];
        if(i < arr.size() -1) cout << ", ";
    }
    
    cout << "]"<<endl;
}


int main() {
    int n,m; cin >> n >> m;
    vector<string> ans = getMazePaths(0,0,n-1,m-1);
    display(ans);

    return 0;
}