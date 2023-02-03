#include<bits/stdc++.h>
using namespace std;

string uniqueChar(string str) {
    string ans="";
	unordered_map<char,bool> map;
    for(int i=0;i<str.size();i++){

      if (map.find(str[i])==map.end()){
          //not present
          ans+=str[i];
          map[str[i]]=true;
      }
    }
    return ans;
}


int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}