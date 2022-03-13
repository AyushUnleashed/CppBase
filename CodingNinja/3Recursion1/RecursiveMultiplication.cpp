#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}

int multiplyNumbers(int m, int n) {
    
    if(n==0 || m==0)
    {
        return 0;
    }
    int ans =0;
    ans = m + multiplyNumbers(m,n-1);
	return ans;
}


