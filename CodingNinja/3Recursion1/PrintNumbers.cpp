#include <iostream>

using namespace std;

void printNum(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    printNum(n-1);
    cout<<" "<<n;
}


int main()
{
    cout<<endl;
    printNum(10);
    return 0;
}
