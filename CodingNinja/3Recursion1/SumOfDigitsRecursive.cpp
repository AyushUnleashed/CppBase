#include <iostream>
using namespace std;

int sumOfDigits(int n) {
	if((n/10)==0)
    {
        return n;
    }
    
    int smallOutput = sumOfDigits(n/10);
    int ans = (n%10) + smallOutput;
    return ans;
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}