#include <iostream>
#include <vector>
using namespace std;

//faith: gss(bc) -> [--, -c, b-, bc ];
//expectation: gss(abc) -> [--, -c, b-, bc, a--, a-c, ab-, abc ];
// f -> e : gss (abc) -> [gss(bc), a +gss(bc)];

vector<string> gss(string s){
    // write your code here
    vector<string> ans;

    if(s.length()==0){
        ans.push_back(""); //gss("") -> [""];
        return ans;
    }
    ans = gss(s.substr(1)); //ans = gss(bc) -> [--, -c, b-, bc ];

    int n = ans.size();
    for(int i=0;i<n;i++){
        string temp = s[0]+ans[i]; // we made : [a--, a-c, ab-, abc ];
        ans.push_back(temp); // & pushed it
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