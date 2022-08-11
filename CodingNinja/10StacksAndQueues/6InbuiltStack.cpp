#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    cout<<endl<<s1.size();
    s1.pop();
    s1.push(30);
    cout<<endl<<s1.top();
    s1.push(50);
    s1.push(60);
    cout<<endl<<s1.size();
    cout<<endl<<s1.empty();
}