#include<bits/stdc++.h>
using namespace std;


int captureForts(vector<int>& forts) {
        
        vector<int> myFortIndices;
        vector<int> emptyPlaceIndices;
        int maxCapturedForts=0;
        
        bool goForward;
        int len=forts.size();
        
        for(int i=0;i<forts.size();i++){

            if(forts[i]==-1){
                emptyPlaceIndices.push_back(i);
            }else if(forts[i]==1){
                 myFortIndices.push_back(i);
            }
        }

        cout<<"\nMyFortVector:\n";
        for(int i=0;i<myFortIndices.size();i++){
            cout<<myFortIndices[i];
        }

        cout<<"\nEmptyPlaceVector:\n";
        for(int i=0;i<emptyPlaceIndices.size();i++){
            cout<<emptyPlaceIndices[i];
        }

        for(int i=0;i<myFortIndices.size();i++){
            for(int j=0;j<emptyPlaceIndices.size();j++){
                
                int myFortIndex=myFortIndices[i];
                int emptyPlaceIndex=emptyPlaceIndices[j];
                
                cout<<"\nL::"<<"myFortIndex:"<<myFortIndex<<" emptyPlaceIndex:"<<emptyPlaceIndex;

                if(myFortIndex==emptyPlaceIndex+1 || myFortIndex==emptyPlaceIndex-1){
                    //skip;
                    cout<<"\nContinue Occured";
                    continue;
                    
                }
                
                if(myFortIndex<emptyPlaceIndex){
                    goForward=true;
                }else{
                    goForward=false;
                }
                cout<<"\nGo:"<<goForward;

                int currMaxCapturedForts=0;
    
                if(goForward==true){
                    
                    for(int k=myFortIndex+1;k<emptyPlaceIndex;k++){
                       
                        if(forts[k]==0 && forts[k+1]==1){
                            //discard
                            currMaxCapturedForts=0;
                            break;
                        }else if(forts[k]==0 && forts[k+1]==0){
                            currMaxCapturedForts++;
                            cout<<"\ncountIncreased next is 0";
                        }else if(forts[k]==0 && forts[k+1]==-1){
                            currMaxCapturedForts++;
                            cout<<"\ncountIncreased next is -1";
                            break;
                        }
                
                    }
  
                } else if(goForward==false){
                    //going back
                    
                    for(int k=emptyPlaceIndex+1;k<myFortIndex;k++){
                       
                        if(forts[k]==0 && forts[k+1]==-1){
                            //discard
                            currMaxCapturedForts=0;
                            break;
                        }else if(forts[k]==0 && forts[k+1]==0){
                            currMaxCapturedForts++;
                        }else if(forts[k]==0 && forts[k+1]==1){
                            currMaxCapturedForts++;
                            break;
                        }
                
                    }
                    
                }
                
                if(currMaxCapturedForts>0 && currMaxCapturedForts>maxCapturedForts){
                        maxCapturedForts = currMaxCapturedForts;
                }
                
            }
        }
        
        return maxCapturedForts;
        
    }


int main(){
    vector<int> forts= {0,0,1,-1};
    cout<<"\n\n\nCapturedForts:"<<captureForts(forts);
    return 0;
}