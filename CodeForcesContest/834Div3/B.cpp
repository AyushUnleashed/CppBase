//B. Lost Permutation

#include<bits/stdc++.h>
#include<string.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        //cout<<"\nt:"<<t<<endl;
        int m;
        int sumOfForgottenElements=0;
        cin>>m;
        cin>>sumOfForgottenElements;
        // cout<<"m:"<<m<<endl;
        // cout<<"s:"<<sumOfForgottenElements<<endl;
        vector<int> foundElements(m,-1);
        int foundElementsSum=0;

       
        for(int i=0;i<m;i++){
            //b1 -> bm
            cin>>foundElements[i];
            foundElementsSum+=foundElements[i];
        }

        //cout<<"\n\nfoundElementsSum: "<<foundElementsSum<<endl;

        sort(foundElements.begin(),foundElements.end());
        // sorted 

        //cout<<"\nFoundElements:";
        // for(int i=0;i<m;i++){
        //     cout<<foundElements[i]<<" ";
        // }

        // calculate some of missing elements from between
        int fESize = foundElements.size();
        int highestFoundElement = foundElements[fESize-1];
        //cout<<"\n\nhighestFoundElement: "<<highestFoundElement<<endl;
        int expectedSumTillHFE = (highestFoundElement*(highestFoundElement+1))/2;
        //cout<<"expectedSumTillHFE: "<<expectedSumTillHFE<<endl;

        //phase1
        int sumOfElementsMissingFromBetween= expectedSumTillHFE -foundElementsSum;
        //cout<<"sumOfElementsMissingFromBetween: "<<sumOfElementsMissingFromBetween<<endl;


        int remainingSumOfForgotternElements = sumOfForgottenElements - sumOfElementsMissingFromBetween;
        //cout<<"remainingSumOfForgotternElements:"<<remainingSumOfForgotternElements<<endl;

        if(remainingSumOfForgotternElements<0){
            cout<<"NO"<<endl;
            continue;
        }else if(remainingSumOfForgotternElements==0){
            cout<<"YES"<<endl;
            continue;
        }else{
            //phase2
            //cout<<"InLoop"<<endl;
            int nextExpectedElement = highestFoundElement+1;

            while(remainingSumOfForgotternElements>0){

                remainingSumOfForgotternElements -=nextExpectedElement;
                //cout<<"remainingSumOfForgotternElements: "<<remainingSumOfForgotternElements<<endl;
                nextExpectedElement++;
            }

            if(remainingSumOfForgotternElements==0){
                cout<<"YES"<<endl;
                continue;
            }else if(remainingSumOfForgotternElements<0){
                cout<<"NO"<<endl;
                continue;
            }
        }
    }
    return 0;
}