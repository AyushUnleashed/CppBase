#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void ReverseString(string s)
{
    if(s.length()==0)
    {
        return;
    }
   string ros = s.substr(1); //give substring from index 1;
    ReverseString(ros);
    cout<<s[0];
}

int main()
{
    system("cls");
    string myString;
    getline(cin,myString);
    ReverseString(myString);
    return 0;
}