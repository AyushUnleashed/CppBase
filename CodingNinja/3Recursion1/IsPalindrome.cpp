#include <iostream>
using namespace std;

bool helper(char input[],int s,int e)
{
	if(s>e+1)
    {
        return true;
    }
    bool smallOutput = helper(input,s+1,e-1);
    if(input[s]==input[e] && (smallOutput==true))
    {	
        return true;
    }
    else
    {
        return false;
    }
}

bool checkPalindrome(char input[]) {
    
    //code for size of input array
	int n = 0;
   while (input[n] != '\0')
   n++;
    

    bool ans= helper(input,0,n-1);
    return ans;
}

int main() {
    char input[50];
    cin >> input;
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
