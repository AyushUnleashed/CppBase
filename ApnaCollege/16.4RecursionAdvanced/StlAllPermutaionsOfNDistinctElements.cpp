#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    do{
        ans.push_back(a);
    }
    while (next_permutation(a.begin(),a.end()));

    cout<<endl;
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<"\t";
        }
        cout<<endl;
    }
}