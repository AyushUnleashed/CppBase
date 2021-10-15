#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int n;
    cin>>n;
    int SOP=0;
    int x;
    int y;

    for( x=1;x<=n;x++)
    {
        y = n/x;
        SOP = SOP + x*y;
    }

    cout<<"\nSOP:"<<SOP;
    return 0;
}