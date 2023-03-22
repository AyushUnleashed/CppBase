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

   
    if(i==n){
        string curr="";
        while(j<m){
            curr+="h";
            j++;
        }
        ans.push_back(curr);
        return ans;
    }
    
    if(j==m){
        string curr="";
        while(i<n){
            curr+="v";
            i++;
        }
            ans.push_back(curr);
        return ans;
    }
    
    
    vector<string> rightCall = getMazePaths(i,j+1,n,m);
    for(int i=0;i<rightCall.size();i++){
        rightCall[i]="h"+rightCall[i];
    }
    
    
    vector<string> bottomCall = getMazePaths(i+1,j,n,m);
    
    for(int i=0;i<bottomCall.size();i++){
        bottomCall[i]="v"+bottomCall[i];
        rightCall.push_back(bottomCall[i]);
    }
    
    ans = rightCall;
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