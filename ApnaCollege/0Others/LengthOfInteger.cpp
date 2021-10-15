#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{   system("cls");
    int number1,number2;
    cout<<"\nEnter number 1:";
    cin>>number1;
    cout<<"\nEnter number 1:";
    cin>>number2;
    //converting number1 to string then using .size() to find size of that string
    int length1=to_string(number1).size();
    int length2=to_string(number2).size();

    cout<<"\nSize of number1:"<<length1;
    cout<<"\nSize of number2:"<<length2;

    return 0;
}