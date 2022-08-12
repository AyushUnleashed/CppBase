

#include<stack>
#include<iostream>
#include<string>
using namespace std;

bool checkRedundantBrackets(string expression) {

    int n = expression.length();
    stack<char> s;
    
    bool containOpeningBracket =false;
    
    //int count=-1;
    
    for(int i=0;i<n;i++)
    {
        // if you encounter opening bracket 
        //push till you get closing bracket ( don't push the closing one)
        //cnt =0, increase count and pop elements till you get a opening bracket. 
        //if cnt!=0, move on and pop the openeing bracket too,
        // if cnt=0 , return true;
        
        if(expression[i]=='(')
        {
            containOpeningBracket = true;
        }
        
        if(containOpeningBracket) // if expression contain brackets , start pushing
        {
            s.push(expression[i]);
        }
        
        if(expression[i]==')')
        {
            
            s.pop(); // popped closing bracket
            
            
            int count = 0;
            
            //start popping till you get opening (
            //then set count to 0 
            
            while(s.top()!='(')
            {
                s.pop();
                count++;
            }
            
            if(count>1){
                //contain meanigful data
                //okay
                s.pop(); // popping ( of old expression

            }else if(count==0 || count==1){

                //redundant bracket
                return true;
            }
            
        }
        
    }
    
    return false;
    
}
int main() {
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}