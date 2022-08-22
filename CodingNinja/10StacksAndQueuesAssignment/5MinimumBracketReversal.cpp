#include <iostream>
#include <string>
#include<stack>
using namespace std;


int countBracketReversals(string input) {
	stack<char> s;
    int count=0;
    // { -> +1
    // } -> -1
    // count =2 -> 2/2 ans
    // count = odd -> return -1
    int n=input.length();
    
    if(n==0){
        return 0;
    }
    
    if((n%2)!=0){
        return -1;
    }
    
	for(int i=0;i<n;i++){
        
        if(input[i]=='{'){
            
            s.push(input[i]);
            
        }else if(input[i]=='}'){
            
            if(s.size()==0){
                s.push(input[i]);   
            }else{
                
                if(s.top()=='{'){
                    s.pop();
                }else if(s.top()=='}'){
                    s.push(input[i]);
                }
                
            }
        }
    }
    
//     cout<<"s.size():"<<s.size();
//     printStack(s); 
//     cout<<endl;
    
    while(s.size()>0){ // size would be 2,4,6,8
        char c1= s.top();
        s.pop();
        char c2 = s.top();
        s.pop();
        
        if(c1!=c2){
            count+=2;
        }else{
            count+=1;
        }
    }
    
    
    
    
    return count;
}

int main() {
    string input;
    cin >> input;
    cout << countBracketReversals(input);
}