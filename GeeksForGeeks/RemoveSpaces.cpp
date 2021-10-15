#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            str.erase(i,1);
            i--;
        }
    }

    cout<<"\nAfterwards:"<<str;
    return 0;
}