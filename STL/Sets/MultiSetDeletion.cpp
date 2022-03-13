#include<bits/stdc++.h>
using namespace std;

void printSet(multiset<string> &mySet)
{
    for(auto str:mySet)
    {
        cout<<str<<" ";
    }
}

int main()
{
    multiset<string> mySet;

    mySet.insert("abc");
    mySet.insert("abc");
    mySet.insert("cde");
    
    // int n;
    // cin>>n;
    // while(n--)
    // {
    //     string temp;
    //     cin>>temp;
    //     mySet.insert(temp); //O(1)
    // }

    cout<<"\nWhich value to delete:\n";
    string temp;
    cin>>temp;

    //way 1 to delete

    // auto it = mySet.find(temp);
    // if(it!=mySet.end())
    // {
    //     mySet.erase(it);
    // }

    //way 2 to delete

    mySet.erase(temp);
    cout<<endl<<"\nAfter erase:\n";
    printSet(mySet);
}

