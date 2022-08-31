#include<iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;

        bool ans=true;

        for(int i=0;i<n;i++){

            if(s1[i]==s2[i]){
                //okay
            }else if(s1[i]!=s2[i]){
                
                if(( s1[i]=='G' && s2[i]=='B') ||( s1[i]=='B' && s2[i]=='G')){
                    //okay
                }else{
                    // not equal
                    ans=false;
                    break;
                }

            }
        }

        if(ans==false){
            cout<<"\nNO";
        }else{
            cout<<"\nYES";
        }

    }
    return 0;
}