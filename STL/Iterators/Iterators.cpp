#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vect  = {21,434,3,6,7,32,0};
    cout<<endl;
    //printing vector using iterator
    vector<int> :: iterator itr;

    for(itr=vect.begin();itr!=vect.end();itr++)
    {
        cout<<(*itr)<<endl;
    }
    return 0;
}   