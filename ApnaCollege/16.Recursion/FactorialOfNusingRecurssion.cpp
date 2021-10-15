#include<iostream>
//#include<conio.h>
using namespace std;

int recursiveFun(int n)
{
    if(n==0)
    {
        return 1;
    }
    int factorial = n *recursiveFun(n-1);
    return factorial;
}

int main()
{
    //system("cls");
    int n;
    cin>>n;
    int fact = recursiveFun(n);
    cout<<"Factorial is:"<<fact;
    return 0;
}