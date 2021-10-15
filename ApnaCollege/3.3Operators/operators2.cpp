#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n%2==0 && n%3==0)
    {
        cout<<"divisible by both 2 and 3";
    }
    else
    if(n%2==0 || n%3==0)
    {
        if(n%2==0)
        cout<<"divisible by 2";
        else
        {
            cout<<"divisible by 3";
        }
        
    }
    else
    {
        cout<<"non divisble by 2 or 3";
    }
    

    return 0;
}