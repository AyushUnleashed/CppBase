/* Given N strings and Q queries 
In each query you are given a string
print frequency of that string
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{   
    unordered_map<string,int> m;
    // key is the unique string and in value we will store its frequency
    int n;
    cin>>n;
    cout<<"\nMapInput:\n";
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        m[s]=m[s]+1;
    }

    cout<<"\nEnter Queries:\n";
    // q querys
    int q;
    cin>>q;
    while(q)
    {
        string s;
        cin>>s;
        cout<<" "<<m[s]<<endl;
        q--;
    }

    //output of map
    cout<<endl;
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    
}