#include<iostream>
using namespace std;
//Recursive Solution
// Time complexity O(b) -> O(Log(b))
//find a raise to power b
// a^b = a^(b/2) * a^(b/2)

int power(int a,int b)
{   // a!=0
    if(b==0) return 1;
    if(b==1) return a; //could be removed
    int temp  = power(a,b/2);
    int result = temp*temp;
    //if b is odd , multiply it one time
    if((b%2)!=0)
    {
        result = result*a;
    }
    return result;
}

int main()
{      system("cls");
    int a,b;
    cin>>a>>b;
    //a raise to power b;
    cout<<power(a,b);
    return 0;
}