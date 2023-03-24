#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string asf){
    if(ques.size()==0){
        cout<<asf<<"\n";
    }
    
    // for(int i=0;i<ques.size();i++){
        int idx = ques[0]-'0';
        string curr = codes[idx];
        for(int j=0;j<curr.size();j++){
            //take
            printKPC(ques.substr(1),asf+curr[j]);
        }
    //}
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}