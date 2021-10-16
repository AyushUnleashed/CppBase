#include<iostream>
#include<conio.h>
using namespace std;
//input and output of array using pointers
int main()
{
    system("cls");
    int var=5;
    int *ptr1;
    ptr1=&var;
    int **ptr2;
    ptr2 = &ptr1;

    cout<<"\nPtr2||Address of Ptr1: "<<ptr2;
    cout<<"\nPtr1 || Address of Var: "<<*ptr2<<" | "<<ptr1;
    cout<<"\nVar:"<<**ptr2<<" | "<<*ptr1<<" | "<<var;  

    return 0;

}