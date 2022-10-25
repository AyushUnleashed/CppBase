#include<iostream>
using namespace std;

int main()
{  int i=1;

    int x=i++ + i++;
    //x = 1 + 2
    // i is now 3
    cout<<i<<" "<<x;
    return 0;
}