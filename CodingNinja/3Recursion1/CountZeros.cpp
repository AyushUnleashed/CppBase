#include <iostream>
using namespace std;

int countZeros(int n) {
    if(n==0)
    {
        return 1;
    }
	
    if((n/10)==0)
    {
        return 0;
    }

    int smallOutput = countZeros(n/10);
    
    if(n%10==0)
    {
        return 1+smallOutput;
    }
    else
    {
        return smallOutput;
    }
}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
