#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> vect  = {{21,34},{33,54},{7,2},{32,-3}};
    cout<<endl;
    //printing vector using iterator
    vector<pair<int,int>> :: iterator itr;

    for(itr=vect.begin();itr!=vect.end();itr++)
    {
        cout<<(*itr).first<<" "<<itr->second<<endl  ;
    }
    return 0;
}   