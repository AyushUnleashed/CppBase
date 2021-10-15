#include<iostream>
#include<conio.h>
using namespace std;

void increament(int *ptr)
{
    (*ptr) ++;
    cout<<"\n A:"<<*ptr;
}

int main()
{
    system("cls");
    int a=5;
    cout<<"a:"<<a;
    increament(&a);
    cout<<"\na:"<<a;
    return 0;
}