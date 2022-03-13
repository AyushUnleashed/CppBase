#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,string>> v={{1,"ay"},{2,"stvk"},{4,"srny"},{6,"gj"}};

    //v_p is a copy of pair from vector v
    for(pair<int,string> v_p : v)
    {
        cout<<v_p.first<<" "<<v_p.second<<endl;
    }
    cout<<endl;

    //v_p is a refrence to pair from vector v
    for(pair<int,string> &v_p : v)
    {
        cout<<v_p.first<<" "<<v_p.second<<endl;
    }
    cout<<endl;

    //using auto keyword | auto automatically identifies the required data type
    for(auto &v_p:v)
    {
        cout<<v_p.first<<" "<<v_p.second<<endl;
    }
    return 0;
}