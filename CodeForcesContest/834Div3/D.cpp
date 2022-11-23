#include<bits/stdc++.h>
using namespace std;


int countZerosAtEnd(int num){
    int noOfZerosAtEnd=0;

    while(num%10==0  && num>0){
        noOfZerosAtEnd++;
        num=num/10;
    }
    return noOfZerosAtEnd;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int currRoundedZeros=0;
        int maxRoundedZeros=0;
        int finalPrice=n;
        int currPrice=n;

        for(int k=1;k<=m;k++){
            currPrice=n*k;
            currRoundedZeros = countZerosAtEnd(currPrice);

            if(currRoundedZeros>=maxRoundedZeros){
                finalPrice = currPrice;
                maxRoundedZeros=currRoundedZeros;
            }
        }

        if(maxRoundedZeros==0){
            finalPrice = n*m;
        }

        cout<<finalPrice<<endl;
    }

    return 0;
};