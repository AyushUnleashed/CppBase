#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    priority_queue<int> pq;
    
    for(int i=0;i<10;i++){
        pq.push(i*10);
    }
    cout<<"Priority Queue Contains:"<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }
    return 0;
}