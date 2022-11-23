#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        string ans="YES";

        int len=s.size();
        char nextExpectedCharacter=s[0];

        for(int i=0;i<len;i++){
            
            if(s[i]=='Y' && nextExpectedCharacter=='Y'){
                //alright
                nextExpectedCharacter='e';
            }else if(s[i]=='e' && nextExpectedCharacter=='e'){
                //alright
                nextExpectedCharacter='s';
            }else if(s[i]=='s' && nextExpectedCharacter=='s'){
                //alright
                nextExpectedCharacter='Y';
            }else{
                //wrong
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}