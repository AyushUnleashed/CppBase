/*
Number of paths from top-left cell to
 bottom-right cell in a matrix (Recursion)
*/
#include<iostream>
using namespace std;

int totalPaths(int n,int m)
{
    // to reach end -> n,m 
    // sum of ways to reach n,m-1 (y)
    //and n-1,m (x)
    //Recursive leap of faith

    //either in last row or column can go direct
    if(n==1 | m==1)
    {
        return 1;
    } 
    int x = totalPaths(n-1,m);
    int y = totalPaths(n,m-1);
    return x+y;
}

int main()
{
    system("cls");
    int n,m;
    cin>>n>>m;
    cout<<"Total Paths:\n"<<totalPaths(n,m);

    return 0;
}
