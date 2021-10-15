#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    string str1;
    str1+='a';

/*    Error , Cant acces it
    str1[5]='k';
    cout<<str1[5];
*/
    str1+='b';
    string str2="cdef";
    str1 += str2[0];
    cout<<str1;
    
    return 0;
}