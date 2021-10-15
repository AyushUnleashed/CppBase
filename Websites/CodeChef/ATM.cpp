#include<iostream>
#include<conio.h>
using namespace std;

int main()
{   system("cls");
    int withdraw;
    bool wFail=0;
    float balance,totalDeduction;
    
    cout<<"Enter withdrawl and Bank Balance:";
    cin>>withdraw>>balance;

    totalDeduction=(float)withdraw+0.50;

    if( withdraw %5 != 0){wFail=1;}
    if(totalDeduction>balance){wFail=1;}

    if(wFail==0)
    {
        balance=balance-totalDeduction;
    }
    cout<<"\nBalance is:";
    cout<<balance;

}