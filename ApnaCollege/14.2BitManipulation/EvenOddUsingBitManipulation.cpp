#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int mask= 1;//00000000001
    int num;
    cin>>num;

    //code to check even
    if((mask & num) != 0)     //It is odd // Oth bit is 1 
    {
        cout<<"\n"<<num<<" It is an odd number";
    }
    else
    {
        cout<<"\n"<<num<<" It is an even number";
    }

    return 0;
}