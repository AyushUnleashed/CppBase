#include<iostream>
#include<conio.h>
using namespace std;

bool ischar(char);

int main()
{
    system("cls");
    char ch;
    cout<<"Enter Character:";
    cin>>ch;
    bool ans=ischar(ch);

    if(ans==true)
    {
        cout<<"\nGiven character is an Alphabet";
    }
    else
    {
         cout<<"\nGiven character is not an Alphabet";
    }
    return 0;
}

bool ischar(char ch)
{
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {return true;}

    return false;
}