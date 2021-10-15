#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{   int i=0;
    char s[30];
    //system("cls");
    printf("Enter string:");
    gets(s);

    for(;s[i]!='\0';i++){}
    
    printf("\nLength is:%d",(i));
    return 0;
}