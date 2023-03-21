#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
    vector<string> ans;

    if(s.length()==0){
        ans.push_back("");
        return ans;
    }
    ans = gss(s.substr(1));
    int n = ans.size();
    for(int i=0;i<n;i++){
        string temp = s[0]+ans[i];
        ans.push_back(temp);
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0; 

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}