#include<iostream>
#include<conio.h>
using namespace std;

int fact(int num)
{
    int f=1;
    
    while(num>0)
    {
        f=f*num;
        num--;
    }

    return f;
}

int main()
{
    system("cls");
    int num;
    cout<<"Enter num:";
    cin>>num;   
    cout<<endl<<fact(num);
    return 0;
}