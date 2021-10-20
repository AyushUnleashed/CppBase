#include<iostream>
using namespace std;

int pairUp(int n)
{
    if(n==0 | n==1 | n==2 )
    {
        return n;
    }

    int notPaired = pairUp(n-1); //calling n-1 because we left
    int paired = pairUp(n-2)*(n-1); // calling n-2 because we paired (2 people gone)
    //there are n-1 ways to pair that person

    return paired+notPaired;
}

int main()
{
    int n;
    cin>>n;
    cout<<pairUp(n);
}