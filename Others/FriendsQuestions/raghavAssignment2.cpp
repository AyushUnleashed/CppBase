#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    int number;
    cout<<"Enter 5 digit no:";
    cin>>number;
    cout<<endl;
    int dig0,dig4;
    dig0=number/10000;
    dig4=number%10;

    //Code to replace 0th and 4th position of integer digits;

    //changing 4th position element with 0th position one
    
    number=number/10;   //deleting 4th position digit(number will only store integer part)
    number=(number*10)+dig0;    //adding 0th position elemtn to 4th position by using logic of (10th place)

    number=number%10000;    //removing 0th place element
    number=(dig4*10000)+number; //0th place digit is now changed with 4th place digit

    cout<<"After replacing 0th and 4th places:\n"<<number;

    return 0;
}