#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;

int main()
{
    system("cls");
    string str;
    getline(cin,str);
    cout<<"\n Since 1st letter was";
    if(isupper(str[0]))
    {
        cout<<" UpperCase whole string is UpperCase";
        transform(str.begin(),str.end(),str.begin(),::toupper);
    }
    else
    {   cout<<" LowerCase whole string is LowerCase";
        transform(str.begin(),str.end(),str.begin(),::tolower);
    }
    cout<<"\n"<<str;
    return 0;
}