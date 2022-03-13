#include <iostream>

using namespace std;

int power(int x, int n) {

    if(n==0)
    {
        return 1;
    }
    int smallOutput = power(x,n-1);
    return x*smallOutput;
}

int main()
{
    cout<<endl<<power(5,3);
    return 0;
}
