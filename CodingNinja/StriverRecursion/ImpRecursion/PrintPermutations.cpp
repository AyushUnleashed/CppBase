#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    
    if(str.size()==0){
        cout<<asf<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char c = str[i];
        string left = str.substr(0,i);
        string right = str.substr(i+1);
        printPermutations(left+right,asf+c);
    }   
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}