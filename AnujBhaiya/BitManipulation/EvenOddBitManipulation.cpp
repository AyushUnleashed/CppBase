// if Oth bit is present(1) -> odd number
// if 0th bit is absent(0) -> even number | only have power of 2

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int num;
    cin>>num;
    int mask =1;

    if( (num & mask) == 0 )
    {
        cout<<"\nEven Number";
    }
    else
    {
        cout<<"\nOdd Number";
    }
    return 0;
}