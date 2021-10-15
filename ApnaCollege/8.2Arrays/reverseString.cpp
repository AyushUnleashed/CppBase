#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{   system("cls");
    char string[30],rev[30];
    cout<<"Enter String:";
    gets(string);
    int length=strlen(string);

    for(int i=0;i<length;i++)
    {   int index=length-i-1;
        rev[index]=string[i];
    }

    cout<<"Reversed String is:"<<rev;

    return 0;

}