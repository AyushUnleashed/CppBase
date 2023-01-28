#include<bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> input,int size){
    vector<int> output;
    unordered_map<int,bool> seen;
    for(int i=0;i<size;i++){
        if(seen.count(input[i])>0){
            //present
        }else{
            seen[input[i]]=true;
            output.push_back(input[i]);
        }
    }
    return output;
}


int main(){
    vector<int> v = {1,5,10,5,9,9,9,45,45,10,8,30,45};
    vector<int> out = removeDuplicates(v,v.size());
    cout<<endl;
    for(auto &x:out){
        cout<<x<<" ";
    }
}