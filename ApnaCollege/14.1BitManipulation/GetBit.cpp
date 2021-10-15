//Program to maskif bit is 1 at given index of a number(binary);
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int idx=2;

    //bit manipulation using right shift operator
    int mask= 1<<idx; //shift bit of 0001(1) by idx(2) to left => 0100(4) //therefore name is left shift // it shift bits sto left side
    int biNum = 5;//(0101)

    cout<<"\nCheck:"<<mask;
    cout<<"\nbiNum:"<<biNum;

    if((biNum & mask)!=0) // mask has all other places zero ( idx pos =1 ) if num also has that posn we get non-zero , if num has 0 at idx position we get wholw ans =0 
    {
        cout<<"\nbit is 1 at index:"<<idx;
    }
    else
    {
        cout<<"\nbit is 0 at index:"<<idx;
    }   

    return 0;

}