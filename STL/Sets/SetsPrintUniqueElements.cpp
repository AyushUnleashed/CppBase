/* Given N strings,print unique strings in lexographical order
N<=10^5
|S| <=100000*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    int n;
    cin>>n;
    while(n--)
    {
        string temp;
        cin>>temp;
        s.insert(temp); //log(n)
    }
    cout<<endl;
    for(auto str:s)
    {
        cout<<str<<endl;
    }
    return 0;
}