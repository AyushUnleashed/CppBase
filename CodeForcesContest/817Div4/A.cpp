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

        bool containsT=false;
        bool containsi=false;
        bool containsm=false;
        bool containsu = false;
        bool containsr=false;

        if(n!=5){
            cout<<"\nNO";
            continue;
        }else{

            for(int i=0;i<n;i++){

                if(s1[i]=='T'){
                    containsT=true;
                }else
                if(s1[i]=='i'){
                    containsi=true;
                }else
                if(s1[i]=='m'){
                    containsm=true;
                }else
                if(s1[i]=='u'){
                    containsu=true;
                }else
                if(s1[i]=='r'){
                    containsr=true;
                }
            }

            if(containsT && containsi && containsm && containsu && containsr){
                cout<<"\nYES";
            }else{
                cout<<"\nNO";
            }
        }

    }
    return 0;
}