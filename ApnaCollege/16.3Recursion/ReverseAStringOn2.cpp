#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
void ReverseString(int index,char myStg[],int size)
{
    if((size-1)==index)
    {
        cout<<myStg[index];
        return;
    }
    index++;
    ReverseString(index,myStg,size);
    //index--;
    cout<<myStg[index];
}

int main()
{
    system("cls");
    int size = 20;
    char myString[size];
    cin>>myString;
    ReverseString(0,myString,size);
    return 0;
}