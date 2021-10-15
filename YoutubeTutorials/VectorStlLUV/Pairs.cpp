#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    pair<int,string> p,p1;
    cin>>p.first;
    p.second = "Ayush";
    p1 = p;
    p1.first+=5;
    cout<<"\nP.first:"<<p.first;
    cout<<"\nP.Second:"<<p.second;
    cout<<"\nP1.first:"<<p1.first;

    return 0;

}