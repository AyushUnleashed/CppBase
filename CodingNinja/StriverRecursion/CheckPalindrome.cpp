#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool checkPalindrome(string s,int i,int n){
    if(i>=n/2){
        return true;
    }
    bool check1 = checkPalindrome(s,i+1,n);
    bool check2=false;
    if(s[i] == s[n-i-1]){
        check2 = true;
    }
    return check1 && check2;
}

int main(){
    string s;
    cin>>s;
    cout<<checkPalindrome(s,0,s.size());
   
    return 0;
}