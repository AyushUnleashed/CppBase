/* Given N strings, print  unique strings 
in lexiographical order with their frequency
N<=10^5 
|S|<=100
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> m;
    // key is the unique string and in value we will store its frequency
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        //m[s] set key as given string and value by default is one
        // by default int is set as ' 0'// and string as "" empty in map
        m[s]=m[s]+1; // incresed frequency by 1; 
    }
    //output of map
    cout<<endl;
    for(auto &pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }

}
