#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    system("cls");
    string str;
    getline(cin,str);

    for(int i=0;i<str.length();i++)
    {
        if(i%2 == 0)
        {
            str[i]=toupper(str[i]);
        }
        else{
            str[i]=tolower(str[i]);
        }
    }

    cout<<"After code:"<<endl<<str;
    return 0;

}