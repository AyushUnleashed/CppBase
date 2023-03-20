#include<iostream>
using namespace std;

int sumOfFirstNNaturalNumbers(int N){
    if(N==0){
        return 0;
    }
    return N+sumOfFirstNNaturalNumbers(N-1);
}

void sumOfFirstNNaturalNumbersParameterisedWay(int i,int sum){
    if(i==0){
        cout<<endl<<sum;
        return;
    }
    sumOfFirstNNaturalNumbersParameterisedWay(i-1,sum+i);
}

int main(){
    cout<<sumOfFirstNNaturalNumbers(10);
    sumOfFirstNNaturalNumbersParameterisedWay(10,0);
}