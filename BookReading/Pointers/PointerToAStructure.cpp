#include<iostream>
#include<conio.h>
using namespace std;


struct Human
{
    int rollNo;
    char name[20];
}H1;

int main()
{
    system("cls");
    
    Human *pt = &H1;    //pointer of Data type of structure
    cout<<"Enter Roll No:";
    cin>>pt->rollNo;
    fflush(stdin);
    cout<<"Enter Name:";
    gets(pt->name);
    

    cout<<"\nRoll No is:"<<pt->rollNo;
    cout<<"\nName is:"<<pt->name;

    return 0;
}