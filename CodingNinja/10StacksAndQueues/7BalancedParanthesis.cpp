

#include<iostream>
#include <stack>
#include<string.h>
using namespace std;

bool isBalanced(string input) {
    
    // push them in stack until we get oppeing 
    // if we get closing check if opening at top and pop it
    // continue until string reaches end or stack reaches null
    // if stack is null -> true;
    // if stack is not null but string ended -> false;
    // if bracket is not corresponding at top-> false;
    
    stack<char> s1;
    int n=input.length();
    
    for(int i=0;i<n;i++)
    {
        if(input[i] == '(' || input[i] == '{' || input[i] == '[')
        {
            s1.push(input[i]);
        }
        else if(input[i]==')' || input[i]=='}' || input[i]==']'){
            
            if(s1.empty())
            {
                return false;
            }
            
            if( (input[i] == ')' && s1.top()=='(' ) || (input[i] == '}' && s1.top()=='{' )  || (input[i] == ']' && s1.top()=='[' ) ){
                
                // matching 
                //pop 
                s1.pop();
            
                
            }else{
                // not matched
                return false;
            }

        } 
    }
    
    if(s1.empty())
    {
        return true;
    }
    return false;
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}