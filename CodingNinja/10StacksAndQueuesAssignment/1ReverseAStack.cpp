#include <iostream>
#include <stack>
using namespace std;



void reverseStack(stack<int> &input, stack<int> &extra) {
    
    if(input.size()==1 || input.size()==0)
    {
        return;
    }
	 int currentTop = input.top();
    
    //passing smaller input
    input.pop();
    reverseStack(input,extra);
    
    // from input to extra
    while(input.size()!=0)
    {
    	int temp = input.top();
        extra.push(temp);
        input.pop();
    }
    //extra will be filled , input would be empty 
    
    // place currentTop at bottom, so push on empty input Stack
    input.push(currentTop);
    
    // from extra to input
    while(extra.size()!=0)
    {
    	int temp = extra.top();
        input.push(temp);
        extra.pop();
    }
    
    // now stack got reversed
    
}


int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }
}