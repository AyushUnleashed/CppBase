#include<iostream>
#include<conio.h>
using namespace std;

int clearBit(int num,int posn)
{
    int mask = ~ (1<<posn); //something like ...1111110111

    return (mask & num);
}

int main()
{
    system("cls");
    int num = 10 ; // (bi)00010010 => (int)10
    int posn=1;
    int newNum=clearBit(num,posn);
    cout<<"\nNew Number after Clearing bit is:"<<newNum;
    return 0;
}