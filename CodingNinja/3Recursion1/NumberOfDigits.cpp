#include<iostream>
#include<conio.h>
using namespace std;

int count(int n)
{   
    //Base Condition
    if((n/10)==0)
    {
        return 1;
    }
    int smallOutput = count(n/10);
    return 1+smallOutput;
}
int main()
{
    int n;
    cin>>n;
    cout<<count(n);
}

//int countWhile(int n)
// {
//     int digit=0;
//     while(n!=0)
//     {
//         n=n/10;
//         digit++;
//     }
//     return digit;
// }
