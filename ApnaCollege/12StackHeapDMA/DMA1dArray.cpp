// 2 May 21 1:14am
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int *p = new int[n];
    cout<<"\nEnter array:";

    for(int i=0;i<n;i++)
    {
        cin>>*(p+(4*i));
    }

    cout<<"\nYou Entered this array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<*(p+4*i)<<" " ;
    }
    delete[] p;
    p=NULL;
    return 0;
}