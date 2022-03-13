/*Given N strings and Q queries
In each query you are given a string
print yes if string is present
else no*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> mySet;
    int n;
    cin>>n;
    while(n--)
    {
        string temp;
        cin>>temp;
        mySet.insert(temp); //O(1)
    }

    int q;
    cin>>q;
    while(q--)
    {
        cout<<endl;
        string tempQ;
        cin>>tempQ;

        if(mySet.find(tempQ)!=mySet.end()) //O(1)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    // cout<<endl;
    // for(auto str:mySet)
    // {
    //     cout<<str<<endl;
    // }

    return 0;
}