#include<iostream>
#include<stack>
using namespace std;


int* stockSpan(int *price, int size)  {
	
    int* ans = new int[size];
    
    int stockSpan=1;
    ans[0]=stockSpan;
    
    for(int i=1;i<size;i++){
        
        stockSpan=1;
        
        for(int j=i-1;j>=0;j--){
            
            if(price[i]>price[j])
            {
               stockSpan++; 
            }else{
                break;
            } 
        }
        
       	ans[i]=stockSpan;
    }
    
    return ans;
}


int main() {
    int size;
    cin >> size;

    int *input = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int *output = stockSpan(input, size);
    for (int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }

    cout << "\n";

    delete[] input;
    delete[] output;
}