// https://www.youtube.com/watch?v=gUrfXZ0hqoA

#include<iostream>
#include<iterator>
#include<map>

using namespace std;

int main()
{
    //initialisation
    map<int,string> map1;
    map<int,string> :: iterator itr;

    map1[1] = "ABC";
    map1[34] = "sdasS";
    map1.insert({2,"BBB"});
    //output of data
    for (itr = map1.begin();itr!=map1.end();itr++)
    {
        cout<<itr -> first<<" "<<itr -> second<<endl;
    }
    
}