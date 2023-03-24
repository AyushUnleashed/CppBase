#include<iostream>
using namespace std;


    void printMazePaths(int sr, int sc, int dr, int dc, string psf) {
        // write your code here
    
       if(sr==dr && sc==dc){
        cout<<psf<<"\n";
        return;
      }
    
      //horizontal move
        for(int i=1;i<=dc-sc;i++){
          string temp = to_string(i);
          printMazePaths(sr,sc+i,dr,dc,psf+"h"+temp);
      }
      
        //vertical move
        for(int i=1;i<=dr-sr;i++){
          string temp = to_string(i);
          printMazePaths(sr+i,sc,dr,dc,psf+"v"+temp);
      }
        //diagonal move
        for(int i=1;i<=dr-sr && i<=dc-sc;i++){
          string temp = to_string(i);
          printMazePaths(sr+i,sc+i,dr,dc,psf+"d"+temp);
      }
  
    }

int main() {
        int n ;
        int m ;cin>>n>>m;
        printMazePaths(0, 0, n - 1, m - 1, "");
    }