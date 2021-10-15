#include<iostream>
#include<conio.h>
using namespace std;
//you can subtract to character to get integer as ans.
int main()
{   
    system("cls");
    char a[10]={'4','5'};
    char c[10]={'A','a'};
    int b,d; 
    b =a[1]-a[0];
    d =c[1]-c[0];
    cout<<"b:"<<b<<endl<<"d:"<<d;
    return 0;
}