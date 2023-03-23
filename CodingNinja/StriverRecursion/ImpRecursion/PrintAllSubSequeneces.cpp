#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    if(ques.size()==0){
        cout<<ans<<endl;
        return;
    }
    //take
    printSS(ques.substr(1),ans+ques[0]);
    //not take
    printSS(ques.substr(1),ans);
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}