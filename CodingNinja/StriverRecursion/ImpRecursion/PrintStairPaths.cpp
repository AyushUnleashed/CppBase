#include <iostream>
using namespace std;

void printStairPaths(int n, string psf){
    // write your code here
   if(n==0){
       cout<<psf<<"\n";
       return;
   }
   if(n<0){
       return;
   }
   printStairPaths(n-1,psf+"1");
   printStairPaths(n-2,psf+"2");
   printStairPaths(n-3,psf+"3");
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}