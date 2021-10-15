#include<iostream>
#include<conio.h>
using namespace std;

//to set 0 or 1 at a given postion
int main()
{
    system("cls");
    int num = 5; // 101
    int pos=1;
    int mask= 1<<pos; // 010
    bool choice;
    int newNum;
    cout<<"\nNum:"<<num<<" 101";
    cout<<"\nPos:"<<pos;
    cout<<"\nMask:"<<mask<<" 010";
    cout<<"\nEnter  1 /0 to set bit to:";
    cin>>choice;

    if(choice==0)
    {   mask = ~mask;
        newNum = (num & mask);  //5
    }
    else
    {
        newNum = (num | mask);
    }

    cout<<"\nOutput is:"<<newNum; //7
    getch();
    return 0;
}