#include<iostream>
using namespace std;

void toh(int n, int t1id, int t2id, int t3id){
    
    if(n==0){
        return;
        // cout<<"1["<<t1id<<"->"<<t2id<<"]";
    }
    
    //move n-1 disc from t1id to t3id using t2id
    toh(n-1,t1id,t3id,t2id);
    //move nth disc from t1id to t2id
    cout<<n<<"["<<t1id<<"->"<<t2id<<"]"<<endl;
    
    //move (n-1) disc from t3id to t2id using t1id
    toh(n-1,t3id,t2id,t1id);
    
  }




int  main() {

    int n;cin>>n;
    int n1,n2,n3;cin>>n1>>n2>>n3;
    // (n disc, from soucre, to destination, using helper)
    toh(n, n1, n2, n3);
  }