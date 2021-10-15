//Program to not print no.'s divisible by 3 between 1 to 100
#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<endl;

    }
}