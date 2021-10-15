#include<iostream>
#include<conio.h>
using namespace std;

//setBit -> set bit to 1 at given position
int setBit(int num,int posn)
{
    int check = 1<< posn;   //changing bit to given posn using left shift
    // if if already has bit 1 then okay otherwise set  bit to 1 (we used bitwise or aif anyone has  1 , it will become 1)
    num = (num | check); // changing num;
    return num;
}

int main()
{
    system("cls");
    int num = 10 ; // (bi)00010010 => (int)10
    int posn=0;
    int newNum; 
    newNum=setBit(num,posn);  //new num must be 11 for posn 0;
    cout<<"\nNew Number is:"<<newNum;
    return 0;
}