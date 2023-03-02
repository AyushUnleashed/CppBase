#include<iostream>
using namespace std;

void printName(int N){
    if(N==0){
        return;
    }
    cout<<"Ayush"<<endl;
    printName(N-1);
}


int main(){
    printName(10);
}