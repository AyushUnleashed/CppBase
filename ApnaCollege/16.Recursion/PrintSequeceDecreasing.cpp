#include<iostream>
#include<conio.h>
using namespace std;

void printDec(int n)
{
    if(n==0)
    {
       return;
    }
    cout<<n<<" ";
    printDec(n-1);

}

void printInc(int n)
{
    if(n==0)
    {
        return;
    }
    printInc(n-1);
    cout<<n<<" ";
}

int main()
{
    system("cls");
    int n; cin>>n;
    cout<<endl; printInc(n);
    return 0;
}