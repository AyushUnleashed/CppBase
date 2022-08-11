#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(30);
    cout<<endl<<q.front();
    q.pop();
    cout<<endl<<q.front();
    cout<<endl<<q.size();
    cout<<endl<<q.empty();
    q.pop();
    cout<<endl<<q.size();
    q.pop();
    cout<<endl<<q.size();
    q.push(50);
    q.pop();
    cout<<endl<<q.size();
    cout<<endl<<q.empty();
    return 0;
}