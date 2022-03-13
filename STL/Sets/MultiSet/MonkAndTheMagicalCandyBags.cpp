#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   //cout<<"\nIn Loop";
        long long n;
        long long k;
        cin>>n>>k;
        multiset<long long> mySet;
        //cout<<"\n Insert it";
        for(int i=0;i<n;i++)
        {
            long long candyCount;
            cin>>candyCount;
            mySet.insert(candyCount);
        }

       long long totalCandies=0;
        //in multi set last element is largest(since sorted)
        //we will remove it , and then add its half back till k minutes

        //cout<<"\ncode Works";

        for(int i=1;i<=k;i++)
        {
            auto it = mySet.end();
            it--;

            long long candyCount = *it;
            totalCandies+=candyCount;
            mySet.erase(it);
            mySet.insert(candyCount/2);
        }

        cout<<"\n"<<totalCandies;
    }
    return 0;
}