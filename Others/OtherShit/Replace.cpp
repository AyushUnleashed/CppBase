#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    system("cls");
    char arr[100];
    cin.getline(arr,99);

for(int i=0;arr[i]!='\0';i++)
{
    if(arr[i]=='a' || arr[i]=='A')
    {
        arr[i]='*';
    }
}

cout<<"\nfinal arr:"<<arr;
return 0;
}